#include<stdio.h>
#include<string.h>
//ö����C����Ҫ����������������������ǵ���һ��������ʹ��
enum color {red,blue,green};
enum COLOR { RED, BLUE, YELLOW, NUMCOLORS };
enum pen { red = 1, green, blue = 5 };//����red=1green=2��blue=5��
void f(enum color c);
int main(void)
{
	//1.�������Ż�����Ϊ���ֺ���֪���������˼���������������Ż�eg.number=10���ͺ���������
	//eg. const red=0;
	//const blue=1;���������и����㷽���������������
	//ö�٣�enum COLOR{red,blue}������red����0blue����1��
	enum color t = red;
	scanf("%d", &t);
	f(t);
	//�Զ�������ö��
	enum COLOR {RED,BLUE,YELLOW,NUMCOLORS};
	int color = -1;
	char *Colornames[NUMCOLORS] = { "RED","BLUE","YELLOW" };
	char *colorname = NULL;
	printf("������ϲ������ɫ���룺");
	scanf("%d", &color);
	if (color >= 0 && color < NUMCOLORS) {
		colorname = Colornames[color];
	}//������Ҫ�������е�ö����ʱ���߽���һ����ö�������±������ͺܷ����� 
	else
	{
		colorname = "unkown";
	}
	printf("��ϲ������ɫ�ǣ�%s\n", colorname);
	//����ö����ʱ�����Լ�����
	enum pen{ red = 1,green,blue = 5 };//����red=1green=2��blue=5��

	return 0;
}
void f(enum color c)
{
	printf("%d\n", c);
}