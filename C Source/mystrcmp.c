#include<stdio.h>
#include<string.h>
int mycmp(const char *s1,const char *s2)
{
	int idex = 0;//�±�
	while (s1[idex]==s2[idex]&&s1[idex]!='\0') {
		//if(s1[idex]!=s2[idex]){
		//	break;
		//}	//�������ȵ�ʱ����뿪
		//else if (s1[idex] == '\0') {
		//	break;
		//}//�������ţ����ǲ��ǵ��˽�β��������˽�β������\
		//��ôһ��ο��Լ򻯳�һ���߼��жϣ�������������s1[idex]��=��\0����һֱѭ��
		idex++;
	}
		int i = s1[idex] - s2[idex];
		if (i > 0) {
			i = 1;
		}
		else if (i < 0) {
			i = -1;
		}
		return i;
}//����Ϳ���ʵ��strcmp�Ĺ��ܣ�֮ǰ�İ汾û�����ǿ��ת��1��-1�Ĺ��ܣ���������
int main(int argc, char const *argv[])
{
	int strcmp(const char *s1, const char *s2);//�����Ƚ������ַ����Ĵ�С\
												��ȷ���0��s1>s2������1��s1<s2������-1��
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", s1 == s2);//������ʲô�ַ�������Ľ������0
	printf("%d\n", strcmp(s1, s2));
	if (strcmp(s1, s2) == 0) {
		printf("���\n");
	}
	else if (strcmp(s1, s2)>0) {
		printf("s1>s2\n");
	}
	else {
		printf("s1<s2");
	}

	return 0;
}