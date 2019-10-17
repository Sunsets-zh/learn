clear all
err=0.001;
lr=0.9;
max=10000;
%===========================
%===========================
P=[0 0 1 1;0 1 1 0;1 1 1 1];%输入x1，x2，b
P
T=[0 1 0 0];%第一个神经元训练
T
[M,N]=size(P);
[L,N]=size(T);
W1=rand(L,M);
W1
y=0;
for epoch=1:max
    V1=W1*P;
    for j=1:N
        for i=1:L
        if(V1(i,j)>=0)
            y(i,j)=1;
        else
            y(i,j)=0;
        end
        end
    end
E=(T-y);
    EE=0;
    for j=1:N
        EE=EE+abs(E(j));
    end
    if(EE<err)
        break;
    end
W1=W1+lr*E*P';
end
%================================
%================================
%第二个神经元训练
P=[0 0 1 1;0 1 1 0;1 1 1 1];%输入x1，x2，b
P
T=[1 1 1 0];%第二个神经元训练的期望
T
[M,N]=size(P);
[L,N]=size(T);
W2=rand(L,M);
W2
y=0;
for epoch=1:max
    V2=W2*P;
    for j=1:N
        for i=1:L
        if(V2(i,j)>=0)
            y(i,j)=1;
        else
            y(i,j)=0;
        end
        end
    end
E=(T-y);
    EE=0;
    for j=1:N
        EE=EE+abs(E(j));
    end
    if(EE<err)
        break;
    end
W2=W2+lr*E*P';
end
%===================================
%===================================
%第三个神经元训练
P=[0 1 0 0;1 1 1 0;1 1 1 1];%输入y1，y2，b
P
T=[0 1 0 1];%第三个神经元训练
T
[M,N]=size(P);
[L,N]=size(T);
W3=rand(L,M);
W3
y=0;
for epoch=1:max
    V3=W3*P;
    for j=1:N
        for i=1:L
        if(V3(i,j)>=0)
            y(i,j)=1;
        else
            y(i,j)=0;
        end
        end
    end
E=(T-y);
    EE=0;
    for j=1:N
        EE=EE+abs(E(j));
    end
    if(EE<err)
        break;
    end
W3=W3+lr*E*P';
end


%===================================
%==================================

y


            
