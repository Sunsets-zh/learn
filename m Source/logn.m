close all;
clear all;
data = xlsread('����.xls','sheet1'); %��������
[y x]=hist(data,100);   %ͳ��Ƶ�ηֲ�
figure('Color','w');h=bar(x,y,1);  %��ֱ��ͼ
set(h,'EdgeColor',[0.5 0.5 0.5],'FaceColor',[0.5 0.5 0.5]);
hold on;

%������̬�ֲ��ܶȺ���
fun=@(p,x) p(1)./x.*exp(-((log(x)-p(2))/p(3)).^2/2); 
[maxy ind]=max(y); 
%���������������
p=nlinfit(x,y,fun,[maxy*x(ind),log(x(ind)),1]);

%���������
x1 = min(x):0.01:max(x);
yfit=fun(p,x1); 
plot(x1,yfit,'k','linewidth',3);

[ymax i] = max(yfit); %�ҵ���ֵ��
xm = x1(i);
plot([xm xm],[0 ymax+10],'k','linewidth',3); %������
xlim([min(x) max(x)]);
xlabel('BCŨ�ȣ�ng/m^3��');
ylabel('Ƶ��');