x=[500 550 600 650 700 750 800 850 900 950 1000];
y=[62.4 69.2 75.4 82.2 70.4 68.4 75.2 77.8 71.6 75.6 72.2];

f = fittype('a*log10(x)+b'); % 拟合函数的形式 
fit1 = fit(x',y',f,'StartPoint',[x(1) y(1)]);
a = fit1.a; % a的值
b = fit1.b; % b的值
fdata = feval(fit1,x'); % 用拟合函数来计算y

figure
plot(x,y); hold on
plot(x,fdata','r'); hold off
legend('Ori data',' Fitting data'); 