close all;
clear all;
data = xlsread('数据.xls','sheet1'); %读入数据
[y x]=hist(data,100);   %统计频次分布
figure('Color','w');h=bar(x,y,1);  %画直方图
set(h,'EdgeColor',[0.5 0.5 0.5],'FaceColor',[0.5 0.5 0.5]);
hold on;

%对数正态分布密度函数
fun=@(p,x) p(1)./x.*exp(-((log(x)-p(2))/p(3)).^2/2); 
[maxy ind]=max(y); 
%做非线性数据拟合
p=nlinfit(x,y,fun,[maxy*x(ind),log(x(ind)),1]);

%画拟合曲线
x1 = min(x):0.01:max(x);
yfit=fun(p,x1); 
plot(x1,yfit,'k','linewidth',3);

[ymax i] = max(yfit); %找到极值点
xm = x1(i);
plot([xm xm],[0 ymax+10],'k','linewidth',3); %画竖线
xlim([min(x) max(x)]);
xlabel('BC浓度（ng/m^3）');
ylabel('频数');