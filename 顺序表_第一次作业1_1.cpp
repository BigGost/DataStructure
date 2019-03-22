//数据结构第一次作业1_1、1807、20181003071、邓亮伟
#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2

//Status是函数返回值类型，其值是函数结果状态代码;
//typedef int Status;

typedef int ElemType;//ElemType 为可定义的数据类型，此设置为int类型;
#define MAXSIZE 100	//顺序表可能达到的最大长度

typedef struct {
	ElemType *elem;
	int length;
} SqList;

//创建一个新的空的顺序表;
void InitList_Sq(SqList &L) {
	L.elem=new ElemType[MAXSIZE];
	if(!L.elem) exit(OVERFLOW);
	L.length=0;
}

int main() {
	SqList L;
	InitList_Sq(L);//建表;
	int i,n;
	cin>>n;//表中数据元素个数; 
	for(i=0; i<n; i++)//将数据元素输入表中; 
		cin>>L.elem[i];
	L.length=n;
	for(i=0; i<L.length; i++)//输出该表中的数据元素; 
		cout<<L.elem[i]<<" ";

	return 0;
}
