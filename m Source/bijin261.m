clear all;
clc

alfa=0.05;
xite=0.5;      

w2=rands(6,1);   
w2_1=w2;w2_2=w2_1;
w1=rands(2,6);
w1_1=w1;w1_2=w1;
dw1=0*w1;
x=[0,0]';
u_1=0;
y_1=0;


I=zeros(6,1);
Iout=zeros(6,1);
FI=zeros(6,1);

ts=0.001;%T=1ms
for k=1:1:2000
   time(k)=k*ts;
   u(k)=0.5*sin(6*pi*k*ts);
   y(k)=u_1^3+y_1/(1+y_1^2);  
   
for j=1:1:6
    I(j)=x'*w1(:,j);
    Iout(j)=1/(1+exp(-I(j)));
end
yn(k)=w2'*Iout;
e(k)=y(k)-yn(k);

w2=w2_1+(xite*e(k))*Iout+alfa*(w2_1-w2_2);

for j=1:1:6
    FI(j)=exp(-I(j))/(1+exp(-I(j)))^2;                %求导数部分
end
   
for i=1:1:2
    for j=1:1:6
        dw1(i,j)=e(k)*xite*FI(j)*w2(j)*x(i);          %变量
    end
end
w1=w1_1+dw1+alfa*(w1_1-w1_2);

%yu=0;
%for j=1:1:6
   % yu=yu+w2(j)*w1(1,j)*FI(j);
%end
%dyu(k)=yu;

x(1)=u(k);
x(2)=y(k);

w1_2=w1_1;w1_1=w1;
w2_2=w2_1;w2_1=w2;
u_1=u(k);
y_1=y(k);
end

figure(1);
plot(time,y,'r',time,yn,'b');
xlabel('time(s)');ylabel('y and yn');
legend('实际值','估计值');
figure(2);
plot(time,y-yn,'r-');
xlabel('time(s)');ylabel('误差');