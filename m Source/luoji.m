clear;
clc;
% 1，读入数据
%双曲贴现
load('D:\ex4x.dat');
load('D:\ex4y.dat');
x = ex4x;
y = ex4y;

% 2，显示数据，查看分布
pos = find(y == 1); neg = find(y == 0);
plot(x(pos, 1), x(pos,2), '+'); hold on
plot(x(neg, 1), x(neg, 2), 'o')

% 3, 参数设置
iteration = 10000;
sample_num = length(x); % 样本个数
x = [ones(sample_num, 1), x];
theta = zeros(size(x, 2), 1); % 参数
alpha = 0.1;

% 4，特征归一化
x(:,2) = (x(:,2)- mean(x(:,2)))./ std(x(:,2));
x(:,3) = (x(:,3)- mean(x(:,3)))./ std(x(:,3));

% 5，迭代，寻找最佳参数
for i = 1:iteration
    h = 1 ./ (1 + exp(-x * theta)); % 通过假设函数得到预测值
    J(i,1) = -1/sample_num * (y' * log(h+eps) + (1-y)'*log(1-h+eps)); % 当前参数下的损失值
    theta(1,1) = theta(1,1) - alpha * sum((h - y) .* x(:,1));  % 更新参数
    theta(2,1) = theta(2,1) - alpha * sum((h - y) .* x(:,2));
    theta(3,1) = theta(3,1) - alpha * sum((h - y) .* x(:,3));
    %theta = theta - alpha * x'*(h-y); % 同时更新所有参数
end

figure,
plot(x(pos, 2), x(pos,3), '+'); hold on
plot(x(neg, 2), x(neg, 3), 'o')

% 6，边界为Theta'x = 0; theta_1 + theta_2*x_2 + theta_3*x_3 = 0
max_value = max(x(:,2));
min_value = min(x(:,2));
X = min_value:0.001:max_value;
Y = -(theta(1,1) + theta(2,1) * X) / theta(3,1);
plot(X, Y, '-')

