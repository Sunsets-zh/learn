#include<stdio.h>
int main(int argc, char const *argv[])
{
	//%[flags][width][.prec][hiL]type
	//flags(-,+, ,0)+width(9)
	printf("%9d-fla\n", 123);//9��������ַ�Ҫռ��9���ַ�λ
	printf("%+9d-fla\n", 123);//+��������ַ�ǰ��Ҫ�мӺ�
	printf("%-9d-fla\n", 123);//-��Ҫ�������
	printf("%-+9d-fla\n", 123);//���ʹ�ã���������ͬʱҪ������Ӻ�
	printf("%09d-fla\n", 123);//0����˼��ǰ�߿�λȫ����0���
	//width����prec
	//width(number,*,.number,.*)
	printf("%9.2f-wid\n", 123.0);//���9.2������˵С����ǰ����9λ�����ǰ���С���㼰���һ���о�λ��\
							 ����С�������ʾ��λ
	printf("%*d-wid\n",6, 123);//��ʵ6����������*���൱��%6d\n
	//hil���������η�
	//hil(hh,h,l,ll,L)
	printf("%hhd-hil\n", 12345);//hhҪ�����һ�����ֽڵ�char ����������57��ԭ����12345 \
								16�����������λ��39��ȡ����λ����10�����¾���57
	//h-short��l-long��ll-long long��L-long double
	//type(i&d-int;u-unsigned int;o-8;x-16;X-char 16;f-float,F-6float;e&E-exp;g&G-float;a&A-x,float\
	c-char,s-char*,p-point,n-r,num||w,num);
	int num;
	//printf("%d%n-type\n",12345, &num);//������������ͨ������û�����У���ʾ���������
	//printf("%d-type\n", num);
	//scanf%[flag]type
	//flag(*-������num-����ַ�����hh;h;l;ll;L)
	scanf("%*d%d", &num);
	printf("%d-scanf\n", num);//%*d%d,z�м�����*��������ȡ�ĵ�һ������
	//type[...]
	//i��ǿ��ת��Ϊ������
	//��GPRMC,004319.00,,a,
	//scanf("%*[^,],%[^,],%[^,]")//ָҪ�ӿ�ʼ�����ų���Ϊֹ���ַ�ȫ����Ҫ���룻
	//printf scanf�ķ���ֵ
	int i;
	int i1 = scanf("%d", &i);
	int i2 = printf("%d\n", i);
	printf("%d:%d\n", i1, i2);//i1=���뼸�����ݣ�i2�͵�������������ַ�+enter����һλ
	return 0;
}