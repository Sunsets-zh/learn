#include"node.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	Node *head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			//���뵽link-list��    ����Ҫ����һ��link-list��Ҳ��������������Node�ṹ��
			Node *p = (Node*)malloc(sizeof(Node));//��̬�����
			/*struct _node r;
			r.value = number;*/
			p->value = number;
			p->next = NULL;//�����µ�һ������������ĩβ��NULL��Ҫ��ԭ�����һ�����ӹ���
			//�ҵ����һ��
			Node *last = head;//����lastָ��head�����б�����������last��ΪNULLʱ
			if (last) {//last��nextָ����һ����֪����ΪNULL�����һ��ʱ������
				while (last->next) {
					last = last->next;
				}
				//wancheng
				last->next = p;//�����һ�����ӵ��½����Ǹ��� 
			}
			else {
				head = p;//���һ��ʼlast����NULL����ָ����Ǹ�head����NULL����ôhead=p��
			}
		}
	} while (number != -1);
	return 0;
}