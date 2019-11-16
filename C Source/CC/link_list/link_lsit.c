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
			//加入到link-list里    所以要制造一个link-list，也就是链接起来的Node结构体
			Node *p = (Node*)malloc(sizeof(Node));//动态分配的
			/*struct _node r;
			r.value = number;*/
			p->value = number;
			p->next = NULL;//这是新的一个，所以它的末尾是NULL，要让原来最后一个链接过了
			//找到最后一个
			Node *last = head;//定义last指向head，进行遍历操作，当last不为NULL时
			if (last) {//last用next指向下一个，知道他为NULL即最后一个时，跳出
				while (last->next) {
					last = last->next;
				}
				//wancheng
				last->next = p;//把最后一个链接到新建的那个上 
			}
			else {
				head = p;//如果一开始last就是NULL，它指向的那个head就是NULL，那么head=p；
			}
		}
	} while (number != -1);
	return 0;
}