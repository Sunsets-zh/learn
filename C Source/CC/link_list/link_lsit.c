#include"node.h"
#include<stdio.h>
#include<stdlib.h>
void print(List* list);
void add(List* plist, int number);
void search(List* list, int number);
void delete(List* plist, int number);
void delete_list(List*list);
typedef struct _list {
	Node *head;//因为这个list里只有这一个，所以&head=&list，用list来代表整个链表
	//这样做的好处在于，以后添加东西方便，因为找到last进行一个遍历操作，如果每次都从head开始
	//就会很烦，但是如果方便的添加内容，就很方便的分成片区操作
	//如果再定义一个指针变量，那么就可以让它永久指向那个last，那就很方便省略了很多事情；
}List;
int main()
{
	List list;
	list.head = NULL;
	//Node *head = NULL;用了上边这个结构体以后，list里的head就是Node*head了
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			add(&list, number);//这时候传入&list就相当于&head
		}
	} while (number != -1);
	//如果要遍历这个list
	//输出链表
	print(&list);
	search(&list,scanf("%d", &number));
	printf("\n");
	return 0;
}
//给链表加值
void add(List* plist, int number)//这时候直接传进来的就是list的地址，也就是head的地址
{
	//加入到link-list里    所以要制造一个link-list，也就是链接起来的Node结构体
	Node *p = (Node*)malloc(sizeof(Node));//动态分配的
	/*struct _node r;
	r.value = number;*/
	p->value = number;
	p->next = NULL;//这是新的一个，所以它的末尾是NULL，要让原来最后一个链接过了
	//找到最后一个
	Node *last = plist;//定义last指向head，进行遍历操作，当last不为NULL时
	if (last) {//last用next指向下一个，知道他为NULL即最后一个时，跳出
		while (last->next) {
			last = last->next;
		}
		//wancheng
		last->next = p;//把最后一个链接到新建的那个上 
	}
	else {
		plist = p;//如果一开始last就是NULL，它指向的那个head就是NULL，那么head=p；
		//这样存在一个问题，即操作后的head和主函数没什么关系，这就很尴尬，所以给地址套上地址
		//这样直接修改地址里的东西，head就被修改了，可以直接返回

	}
}
//输出链表的一个值
void print(List* plist)
{
	Node *p;
	for (p = plist->head; p; p = p->next) {
		printf("%d\t", p->value);
	}
}
//搜索链表的一个值
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
//删除链表的一个值
void delete(List* plist, int number)
{
	Node *p;
	Node *q;
	for (q = NULL, p = plist->head; p; q = p, p = p->next) {//如果p指向head时就是我们要删除的东西，那么q此时指向NULL，那么此时
		//就不是qnext指向pnext，而是head指向next；
		if (number == p->value) {
			if (q) {
				q->next = p->next;
			}
			else {
				plist.head = p->next;
			}
			free(p);
			break;
		}//保证指针使用时不会指向NULL
		else {
			printf("meizhaodao");
		}
	}
}
//链表的清除
void delete_list(List*list) 
{
	Node*p;
	Node*q;
	for (p = list->head; p; p = q) {
		q = p->next;
		free(p);
	}
}