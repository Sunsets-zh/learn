#include<stdio.h>
//�ַ�������
int main()
{
	char * a[] = {"","Jau","Feb","Mar","Apr","May","Jun","Jul","Aug","Set","Oct","Nov","Oct",};//�����ַ������飬��˵��a[]��һ��ָ�룬ָ�����һ����ַ����ַ�ڴ��������Ҫ������
	printf("�������·ݣ�");
	int month;
	scanf("%d", &month);
	/*switch (month) {
	case 1:printf("%s", a[1]); break;
	case 2:printf("%s", a[2]); break;
	case 3:printf("%s", a[3]); break;
	case 4:printf("%s", a[4]); break;
	case 5:printf("%s", a[5]); break;
	case 6:printf("%s", a[6]); break;
	case 7:printf("%s", a[7]); break;
	case 8:printf("%s", a[8]); break;
	case 9:printf("%s", a[9]); break;
	case 10:printf("%s", a[10]); break;
	case 11:printf("%s", a[11]); break;
	case 12:printf("%s", a[12]); break;
	}*/
	printf("%s", a[month]);
	return 0;
}