clear all
err=0.001;%�������������Сֵ
lr=0.9;%����ѧϰ����
max=10000;%�������ѧϰ����
P=[0, 1, 1, -1, -1, -1, 0;...
   1, 0, 1,  0,  1, -1,-1;...
   1, 1, 1,  1,  1,  1, 1 ];%�ṩ����ѵ��������
P
T=[1, 0, 0, 1, 1, 1,0];%�ṩ�������
T
[M,N]=size(P);%MΪ����ڵ������//M������ N������
[L,N]=size(T);%LΪ����ڵ��������N��ѵ����������L������������N����2
%�����ȡ���еĺ�����Ϊ���Ժ��޸ķ��㣬ֻ��P��T����
W=rand(L,M);%��ʼ��//W(1)=W1,W(2)=W2,W(3)=b(ƫ��)
W
y=0;
%ѵ������-----ǰ����ѵ��
for epoch=1:max%������1�����ֵ��
    V=W*P;%V�������Ԫ������
    for j=1:N%ѵ����������1��N
        for i=1:L%����Ľڵ��1��L
        if(V(i,j)>=0)%������ֵ����
            y(i,j)=1;
        else
            y(i,j)=0;
        end
        end
    end
E=(T-y);%������ȥ����õ����
    EE=0;%��ʼ�����=0
    for j=1:N
        EE=EE+abs(E(j));
    end
    if(EE<err)
        break;
    end
W=W+lr*E*P';
end
W
%===================================
%==================================
%��֤����----���һ����֤
x1=[1;-1;1];
m=W*x1;
if(m>=0)
    y=1;
else
    y=0;
end
y
epoch
figure;
       % ��ʾ������ĵ�ͷ�����
plot([1,1,0],[0,1,-1],'o');
hold on;
plot([0 ,-1,-1,-1],[1,0,1,-1],'*');
axis([-2,2,-1,2]);
legend('��һ��','�ڶ���');
title('7�������Ķ�����');
x=-2:.02:2;
y=x*(-W(2)/W(1))-W(3)/W(1);
plot(y,x);
hold off;

            