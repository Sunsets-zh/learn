clear all
err=0.001;
lr=0.1;
max=1000;
%===========================
%===========================
P=[0 0 1 1;0 1 1 0;1 1 1 1];%输入x1，x2，b
P
T=[0 1 0 1];
[M,N]=size(P);
[L,N]=size(T);
%====================
for suiji=1:1000%如果下述循环中出不来期望，就不断刷新随机取加权随机值，
                %用一种类似猜测的方式去试，运气好的话在限制次数内可以出结果
    W1=rand(L,M);
    W2=rand(L,M);
    W3=rand(L,M);
    W1
    W2
    W3
    y1=0;
    y2=0;
    y3=0;
    for epoch=1:max
        V1=W1*P;
        V2=W2*P;
        for j=1:N
            for i=1:L
            if(V1(i,j)>=0)
                y1(i,j)=1;
            else
                y1(i,j)=0;
            end
            if(V2(i,j)>=0)
                y2(i,j)=1;
            else
                y2(i,j)=0;
            end
            end 
        end      %得到了实际输出的y1,y2
        Q=[y1(1) y1(2) y1(3) y1(4);...
           y2(1) y2(2) y2(3) y2(4);...
              1     1     1     1]
        V3=W3*Q;
        for j=1:N
            for i=1:L
            if(V3(i,j)>=0)
                y3(i,j)=1;
            else
                y3(i,j)=0;
            end
            end
        end    
    E=(T-y3);
        EE=0;
        for j=1:N
            EE=EE+abs(E(j));
        end
        if(EE<err)
            break;
        end
    W1=W1+lr*E*P';
    W2=W2+lr*E*P';
    W3=W3+lr*E*Q';
    end
    W1
    W2
    W3
    y3
    if(EE<err)
       break;
    end
end
%================================
%================================
