//因为可变数组申请内存时，采用BLOCK方式会遇到内存不能申请的情况，所以引入链表
//链表和结点；
#ifndef _NODE_H_
#define _NODE_H_
typedef struct _node {
	int value;
	struct _node *next;
}Node;
struct _node {
	int value;
	struct _node *next;
};
#endif