#include<stdio.h>
#include<string.h>
int main()
{
	//char*strchr(const char*s, int c);//����������߿�ʼ�����ַ����е�һ��c
	//char*strrchr(const char*s, int c);//���������ұ߿�ʼ�����ַ����е�һ��c
	//����NULL��û���ҵ��������Ƿ���ָ���
	char s[] = "hello";//char *s��char s[],ǰ���Ǳ�ʾһ����ַ�������ַ���Ա��һ���ַ���
	//��������ֻ���ģ����ܶ���߽��в����������Ǳ��һ���ռ䣬��ߴ�ŵ������ݣ����Խ��в���
	printf("%s\n",strchr(s, 'l'));//��Ѱ�ҵ����Ǹ��ַ�������
	printf("%s\n", strchr(strchr(s,'l')+1, 'l'));//���Ǹ��ַ�+1λ����������ʵ��
												//����������Ѱ�ҵڶ��Ĳ���
	char *p = strchr(s, 'l');
	printf("%s\n", strchr(p + 1, 'l'));//���ϱߵĴ�����һ���ģ��ַ�����ʵ�����׵�ַ��ʾ������
										//��+1��ʾ��ָ����һ����
	char *t = (char*)malloc(strlen(p) + 1);
	strcpy(t, p);
	printf("t=%s\n", t);
	char a = *p;
	*p = '\0';
	char*b = (char*)malloc(strlen(s) + 1);
	strcpy(b, s);
	printf("b=%s\n", b);
	*p = a;
	printf("s[]=%s\n", s);
	free(b);
	free(t);
	//char *strstr(const char*s1, const char*s2);
	//���������ַ�����Ѱ��һ���ַ������ҷ��ظ��ַ���֮��������ַ�
	//char *strcasestr(const char*s1,const char*s2);
	//���Դ�Сд��strstr
	return 0;
}