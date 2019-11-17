#include"node.h"
#include<stdio.h>
#include<stdlib.h>
void print(List* list);
void add(List* plist, int number);
void search(List* list, int number);
void delete(List* plist, int number);
void delete_list(List*list);
typedef struct _list {
	Node *head;//��Ϊ���list��ֻ����һ��������&head=&list����list��������������
	//�������ĺô����ڣ��Ժ���Ӷ������㣬��Ϊ�ҵ�last����һ���������������ÿ�ζ���head��ʼ
	//�ͻ�ܷ���������������������ݣ��ͺܷ���ķֳ�Ƭ������
	//����ٶ���һ��ָ���������ô�Ϳ�����������ָ���Ǹ�last���Ǿͺܷ���ʡ���˺ܶ����飻
}List;
int main()
{
	List list;
	list.head = NULL;
	//Node *head = NULL;�����ϱ�����ṹ���Ժ�list���head����Node*head��
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);//��ʱ����&list���൱��&head
		}
	} while (number != -1);
	//���Ҫ�������list
	//�������
	print(&list);
	search(&list,scanf("%d", &number));
	printf("\n");
	return 0;
}
//�������ֵ
void add(List* plist, int number)//��ʱ��ֱ�Ӵ������ľ���list�ĵ�ַ��Ҳ����head�ĵ�ַ
{
	//���뵽link-list��    ����Ҫ����һ��link-list��Ҳ��������������Node�ṹ��
	Node *p = (Node*)malloc(sizeof(Node));//��̬�����
	/*struct _node r;
	r.value = number;*/
	p->value = number;
	p->next = NULL;//�����µ�һ������������ĩβ��NULL��Ҫ��ԭ�����һ�����ӹ���
	//�ҵ����һ��
	Node *last = plist;//����lastָ��head�����б�����������last��ΪNULLʱ
	if (last) {//last��nextָ����һ����֪����ΪNULL�����һ��ʱ������
		while (last->next) {
			last = last->next;
		}
		//wancheng
		last->next = p;//�����һ�����ӵ��½����Ǹ��� 
	}
	else {
		plist = p;//���һ��ʼlast����NULL����ָ����Ǹ�head����NULL����ôhead=p��
		//��������һ�����⣬���������head��������ûʲô��ϵ����ͺ����Σ����Ը���ַ���ϵ�ַ
		//����ֱ���޸ĵ�ַ��Ķ�����head�ͱ��޸��ˣ�����ֱ�ӷ���

	}
}
//��������һ��ֵ
void print(List* plist)
{
	Node *p;
	for (p = plist->head; p; p = p->next) {
		printf("%d\t", p->value);
	}
}
//���������һ��ֵ
void search(List* plist, int number)
{
	Node *p;
	for (p = plist->head; p; p = p->next) {
		if (number == p->value) {
			printf("%d\t", p->value);
		}
		else {
			printf("meizhaodao");
		}
	}
}
//ɾ�������һ��ֵ
void delete(List* plist, int number)
{
	Node *p;
	Node *q;
	for (q = NULL, p = plist->head; p; q = p, p = p->next) {//���pָ��headʱ��������Ҫɾ���Ķ�������ôq��ʱָ��NULL����ô��ʱ
		//�Ͳ���qnextָ��pnext������headָ��next��
		if (number == p->value) {
			if (q) {
				q->next = p->next;
			}
			else {
				plist.head = p->next;
			}
			free(p);
			break;
		}//��ָ֤��ʹ��ʱ����ָ��NULL
		else {
			printf("meizhaodao");
		}
	}
}
//��������
void delete_list(List*list) 
{
	Node*p;
	Node*q;
	for (p = list->head; p; p = q) {
		q = p->next;
		free(p);
	}
}