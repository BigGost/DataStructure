//���ݽṹ��һ����ҵ1_2��1807��20181003071������ΰ
#include<iostream>
using namespace std;

typedef struct LNode {
	int data;//����������
	struct LNode *next;//����ָ����
} LNode,*List;//ListΪָ��ṹ��LNode��ָ������

//��������
void InitList(List &L) {
	L=new LNode;
	L->next=NULL;
}

//�������ݵ�����
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

//���List
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
