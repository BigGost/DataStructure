//���ݽṹ��һ����ҵ1_1��1807��20181003071������ΰ
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2

//Status�Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬����;
//typedef int Status;

typedef int ElemType;//ElemType Ϊ�ɶ�����������ͣ�������Ϊint����;
#define MAXSIZE 100	//˳�����ܴﵽ����󳤶�

typedef struct {
	ElemType *elem;
	int length;
} SqList;

//����һ���µĿյ�˳���;
void InitList_Sq(SqList &L) {
	L.elem=new ElemType[MAXSIZE];
	if(!L.elem) exit(OVERFLOW);
	L.length=0;
}

int main() {
	SqList L;
	InitList_Sq(L);//����;
	int i,n;
	cin>>n;//��������Ԫ�ظ���; 
	for(i=0; i<n; i++)//������Ԫ���������; 
		cin>>L.elem[i];
	L.length=n;
	for(i=0; i<L.length; i++)//����ñ��е�����Ԫ��; 
		cout<<L.elem[i]<<" ";

	return 0;
}
