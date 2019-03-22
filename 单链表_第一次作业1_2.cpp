//数据结构第一次作业1_2、1807、20181003071、邓亮伟
#include<iostream>
using namespace std;

typedef struct LNode {
	int data;//结点的数据域
	struct LNode *next;//结点的指针域
} LNode,*List;//List为指向结构体LNode的指针类型

//创建链表
void InitList(List &L) {
	L=new LNode;
	L->next=NULL;
}

//链表数据的输入
void ListInput(List &L,int n) {
	int i;
	LNode *p,*r;
	r=L;
	for(i=0; i<n; i++) {
		p=new LNode;
		cin>>p->data;
		p->next=NULL;
		r->next=p;
		r=p;
	}
}

//输出List
void ListOutput(List L) {
	LNode *p;
	p=L->next;
	while(p!=NULL) {
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main() {
	List L;
	int n;
	InitList(L);
	cin>>n;
	ListInput(L,n);
	ListOutput(L);
	return 0;
}
