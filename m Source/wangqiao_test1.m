snr_dB=-20:1:10;%信噪比
m=length(snr_dB);
number_of_errors=zeros(1,m);%用于保存16psk调制下每一个信噪比下对应的误码率
number_of_errors1=zeros(1,m);%用于保存8psk调制下每一个信噪比下对应的误码率
number_of_errors2=zeros(1,m);%用于保存Qpsk调制下每一个信噪比下对应的误码率
number_of_errors3=zeros(1,m);%用于保存Bpsk调制下每一个信噪比下对应的误码率
for i=1:1:m

%%%%%%%%%%采用16psk调制
M=16; 
k=log2(M); 
n=1200;                          %比特序列长度 
samp=1;                            %过采样率 
x=randint(n,1);                    %生成随机二进制比特流 
x4=reshape(x,k,length(x)/k);       %将原始的二进制比特序列每四个一组
xsym=bi2de(x4.','left-msb');       %将矩阵转化为相应的16进制信号序列 


y=modulate(modem.pskmod(M),xsym);  %用16QAM调制器对信号进行调制 ,这句话也可以写成qammod(xsym,16)效果是一样的
yn=awgn(y,snr_dB(i));         %加入高斯白噪声 
% h=scatterplot(yn);     %经过信道后接收到的含白噪声的信号沈阳理工大学通信原理课程设计报告 6 星座图 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %加入不含白噪声的信号星座图 
% title('接收信号星座图'); 
% legend('含噪声接收信号','不含噪声信号'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %眼图 

yd=demodulate(modem.pskdemod(M),yn); %此时解调出来的是16进制信号 
z=de2bi(yd,'left-msb');            %转化为对应的二进制比特流 
z=reshape(z.',numel(z),1'); 
%%计算误码率
[number_of_errors(i),bit_error_rate(i)]=biterr(x,z); 



%%%%%%%%%%%%%%%8PSK调制
M=8; 
k=log2(M); 
n=1200;                          %比特序列长度 
samp=1;                            %过采样率 
x=randint(n,1);                    %生成随机二进制比特流 
% stem(x(1:50),'filled');            %画出相应的二进制比特流信号 
% title('二进制随机比特流'); 
% xlabel('比特序列');ylabel('信号幅度'); 
x4=reshape(x,k,length(x)/k);       %将原始的二进制比特序列每三个一组

xsym=bi2de(x4.','left-msb');       %将矩阵转化为相应的16进制信号序列 
y=modulate(modem.pskmod(M),xsym);  %用16QAM调制器对信号进行调制 ,这句话也可以写成qammod(xsym,16)效果是一样的
yn=awgn(y,snr_dB(i),'measured');         %加入高斯白噪声 
% h=scatterplot(yn);     %经过信道后接收到的含白噪声的信号沈阳理工大学通信原理课程设计报告 6 星座图 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %加入不含白噪声的信号星座图 
% title('接收信号星座图'); 
% legend('含噪声接收信号','不含噪声信号'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %眼图 

yd=demodulate(modem.pskdemod(M),yn); %此时解调出来的是16进制信号 
z=de2bi(yd,'left-msb');            %转化为对应的二进制比特流 
z=reshape(z.',numel(z),1'); 
%%计算误码率
[number_of_errors1(i),bit_error_rate1(i)]=biterr(x,z); 

%4PSK调制,也叫QPSK
M=4; 
k=log2(M); 
n=1200;                          %比特序列长度 
samp=1;                            %过采样率 
x=randint(n,1);                    %生成随机二进制比特流 
x4=reshape(x,k,length(x)/k);       %将原始的二进制比特序列每2个一组

xsym=bi2de(x4.','left-msb');       %将矩阵转化为相应的16进制信号序列 
y=modulate(modem.pskmod(M),xsym);  %用16QAM调制器对信号进行调制 ,这句话也可以写成qammod(xsym,16)效果是一样的
yn=awgn(y,snr_dB(i),'measured');         %加入高斯白噪声 
% h=scatterplot(yn);     %经过信道后接收到的含白噪声的信号沈阳理工大学通信原理课程设计报告 6 星座图 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %加入不含白噪声的信号星座图 
% title('接收信号星座图'); 
% legend('含噪声接收信号','不含噪声信号'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %眼图 

yd=demodulate(modem.pskdemod(M),yn); %此时解调出来的是16进制信号 
z=de2bi(yd,'left-msb');            %转化为对应的二进制比特流 
z=reshape(z.',numel(z),1'); 
%%计算误码率
[number_of_errors2(i),bit_error_rate2(i)]=biterr(x,z); 

%%%%%2PSK调制，也叫BPSK
M=2; 
k=log2(M); 
n=1200;                          %比特序列长度 
samp=1;                            %过采样率 
x=randint(n,1);                    %生成随机二进制比特流 
% stem(x(1:50),'filled');            %画出相应的二进制比特流信号 
% title('二进制随机比特流'); 
% xlabel('比特序列');ylabel('信号幅度'); 
x4=reshape(x,k,length(x)/k);       %将原始的二进制比特序列每一个一组

xsym=bi2de(x4.','left-msb');       %将矩阵转化为相应的16进制信号序列 
y=modulate(modem.pskmod(M),xsym);  %用16QAM调制器对信号进行调制 ,这句话也可以写成qammod(xsym,16)效果是一样的
% snr=EbNo; %信噪比 
yn=awgn(y,snr_dB(i),'measured');         %加入高斯白噪声 
% h=scatterplot(yn);     %经过信道后接收到的含白噪声的信号沈阳理工大学通信原理课程设计报告 6 星座图 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %加入不含白噪声的信号星座图 
% title('接收信号星座图'); 
% legend('含噪声接收信号','不含噪声信号'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %眼图 

yd=demodulate(modem.pskdemod(M),yn); %此时解调出来的是16进制信号 
z=de2bi(yd,'left-msb');            %转化为对应的二进制比特流 
z=reshape(z.',numel(z),1'); 
%%计算误码率
[number_of_errors3(i),bit_error_rate3(i)]=biterr(x,z); 

end
figure
semilogy(snr_dB,number_of_errors,'black*-'); 
hold on
grid on
semilogy(snr_dB,number_of_errors1,'red*-');
hold on
semilogy(snr_dB,number_of_errors2,'yellow*-');
hold on
semilogy(snr_dB,number_of_errors3,'green*-');

xlabel('信噪比');
ylabel('误码率');
title('16PSK和8PSK,QPSK, BPSK系统的误码率比较');
legend('16PSK','8PSK','4PSK','2PSK');
