snr_dB=-20:1:10;%�����
m=length(snr_dB);
number_of_errors=zeros(1,m);%���ڱ���16psk������ÿһ��������¶�Ӧ��������
number_of_errors1=zeros(1,m);%���ڱ���8psk������ÿһ��������¶�Ӧ��������
number_of_errors2=zeros(1,m);%���ڱ���Qpsk������ÿһ��������¶�Ӧ��������
number_of_errors3=zeros(1,m);%���ڱ���Bpsk������ÿһ��������¶�Ӧ��������
for i=1:1:m

%%%%%%%%%%����16psk����
M=16; 
k=log2(M); 
n=1200;                          %�������г��� 
samp=1;                            %�������� 
x=randint(n,1);                    %������������Ʊ����� 
x4=reshape(x,k,length(x)/k);       %��ԭʼ�Ķ����Ʊ�������ÿ�ĸ�һ��
xsym=bi2de(x4.','left-msb');       %������ת��Ϊ��Ӧ��16�����ź����� 


y=modulate(modem.pskmod(M),xsym);  %��16QAM���������źŽ��е��� ,��仰Ҳ����д��qammod(xsym,16)Ч����һ����
yn=awgn(y,snr_dB(i));         %�����˹������ 
% h=scatterplot(yn);     %�����ŵ�����յ��ĺ����������ź���������ѧͨ��ԭ��γ���Ʊ��� 6 ����ͼ 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %���벻�����������ź�����ͼ 
% title('�����ź�����ͼ'); 
% legend('�����������ź�','���������ź�'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %��ͼ 

yd=demodulate(modem.pskdemod(M),yn); %��ʱ�����������16�����ź� 
z=de2bi(yd,'left-msb');            %ת��Ϊ��Ӧ�Ķ����Ʊ����� 
z=reshape(z.',numel(z),1'); 
%%����������
[number_of_errors(i),bit_error_rate(i)]=biterr(x,z); 



%%%%%%%%%%%%%%%8PSK����
M=8; 
k=log2(M); 
n=1200;                          %�������г��� 
samp=1;                            %�������� 
x=randint(n,1);                    %������������Ʊ����� 
% stem(x(1:50),'filled');            %������Ӧ�Ķ����Ʊ������ź� 
% title('���������������'); 
% xlabel('��������');ylabel('�źŷ���'); 
x4=reshape(x,k,length(x)/k);       %��ԭʼ�Ķ����Ʊ�������ÿ����һ��

xsym=bi2de(x4.','left-msb');       %������ת��Ϊ��Ӧ��16�����ź����� 
y=modulate(modem.pskmod(M),xsym);  %��16QAM���������źŽ��е��� ,��仰Ҳ����д��qammod(xsym,16)Ч����һ����
yn=awgn(y,snr_dB(i),'measured');         %�����˹������ 
% h=scatterplot(yn);     %�����ŵ�����յ��ĺ����������ź���������ѧͨ��ԭ��γ���Ʊ��� 6 ����ͼ 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %���벻�����������ź�����ͼ 
% title('�����ź�����ͼ'); 
% legend('�����������ź�','���������ź�'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %��ͼ 

yd=demodulate(modem.pskdemod(M),yn); %��ʱ�����������16�����ź� 
z=de2bi(yd,'left-msb');            %ת��Ϊ��Ӧ�Ķ����Ʊ����� 
z=reshape(z.',numel(z),1'); 
%%����������
[number_of_errors1(i),bit_error_rate1(i)]=biterr(x,z); 

%4PSK����,Ҳ��QPSK
M=4; 
k=log2(M); 
n=1200;                          %�������г��� 
samp=1;                            %�������� 
x=randint(n,1);                    %������������Ʊ����� 
x4=reshape(x,k,length(x)/k);       %��ԭʼ�Ķ����Ʊ�������ÿ2��һ��

xsym=bi2de(x4.','left-msb');       %������ת��Ϊ��Ӧ��16�����ź����� 
y=modulate(modem.pskmod(M),xsym);  %��16QAM���������źŽ��е��� ,��仰Ҳ����д��qammod(xsym,16)Ч����һ����
yn=awgn(y,snr_dB(i),'measured');         %�����˹������ 
% h=scatterplot(yn);     %�����ŵ�����յ��ĺ����������ź���������ѧͨ��ԭ��γ���Ʊ��� 6 ����ͼ 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %���벻�����������ź�����ͼ 
% title('�����ź�����ͼ'); 
% legend('�����������ź�','���������ź�'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %��ͼ 

yd=demodulate(modem.pskdemod(M),yn); %��ʱ�����������16�����ź� 
z=de2bi(yd,'left-msb');            %ת��Ϊ��Ӧ�Ķ����Ʊ����� 
z=reshape(z.',numel(z),1'); 
%%����������
[number_of_errors2(i),bit_error_rate2(i)]=biterr(x,z); 

%%%%%2PSK���ƣ�Ҳ��BPSK
M=2; 
k=log2(M); 
n=1200;                          %�������г��� 
samp=1;                            %�������� 
x=randint(n,1);                    %������������Ʊ����� 
% stem(x(1:50),'filled');            %������Ӧ�Ķ����Ʊ������ź� 
% title('���������������'); 
% xlabel('��������');ylabel('�źŷ���'); 
x4=reshape(x,k,length(x)/k);       %��ԭʼ�Ķ����Ʊ�������ÿһ��һ��

xsym=bi2de(x4.','left-msb');       %������ת��Ϊ��Ӧ��16�����ź����� 
y=modulate(modem.pskmod(M),xsym);  %��16QAM���������źŽ��е��� ,��仰Ҳ����д��qammod(xsym,16)Ч����һ����
% snr=EbNo; %����� 
yn=awgn(y,snr_dB(i),'measured');         %�����˹������ 
% h=scatterplot(yn);     %�����ŵ�����յ��ĺ����������ź���������ѧͨ��ԭ��γ���Ʊ��� 6 ����ͼ 
% text(real(y)+0.1,imag(y),dec2bin(xsym)); 
% axis([-5 5 -5 5]); 
% hold on; 
% scatterplot(y,1,0,'k+',h);         %���벻�����������ź�����ͼ 
% title('�����ź�����ͼ'); 
% legend('�����������ź�','���������ź�'); 
% axis([-5 5 -5 5]); 
% hold on; 
% eyediagram(yn,2);                  %��ͼ 

yd=demodulate(modem.pskdemod(M),yn); %��ʱ�����������16�����ź� 
z=de2bi(yd,'left-msb');            %ת��Ϊ��Ӧ�Ķ����Ʊ����� 
z=reshape(z.',numel(z),1'); 
%%����������
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

xlabel('�����');
ylabel('������');
title('16PSK��8PSK,QPSK, BPSKϵͳ�������ʱȽ�');
legend('16PSK','8PSK','4PSK','2PSK');
