#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}
List Merge( List L1, List L2 )
{
	List l3;
	l3=(List)malloc(sizeof(List));
	List l4=l3;
	L1=L1->Next;L2=L2->Next;
	while(L1!=NULL||L2!=NULL)
	{
		if(L1!=NULL&&L2==NULL)
		{
			l4->Next=L1;
			L1=L1->Next;
			l4=l4->Next;
		}
		else if(L1==NULL&&L2!=NULL)
		{
			l4->Next=L2;
			L2=L2->Next;
			l4=l4->Next;
		}
		else if(L1->Data>=L2->Data)
		{
			l4->Next=L2;
			L2=L2->Next;
			l4=l4->Next;
		}
		else if(L1->Data<L2->Data)
		{
			l4->Next=L1;
			L1=L1->Next;
			l4=l4->Next;
		}
	 } 
	 return l3;
} 
/* 你的代码将被嵌在这里 */
