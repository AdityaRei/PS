#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0
struct Stack
{
	int item[STACKSIZE];
	int Top;
};

void Initalize(struct Stack *S){
 S->Top=-1;
}

int IsEmpty(struct Stack S){
	if(S.Top==-1)
	return TRUE;
	else
	return FALSE;
}
void Push(struct Stack *S,int x){
if(S->Top==STACKSIZE-1){
	printf("\nStack overflow");
	exit(1);
}
S->Top=S->Top+1;
S->item[S->Top]=x;
}
int Pop(struct Stack *S){
	int x;
	if(IsEmpty(*S)){
		printf("\nStack Underflow");
		exit(1);
	}
	x=S->item[S->Top];
	S->Top=S->Top-1;
	return x;
}
int StackTop(struct Stack *S){
	int x;
   x=S->item[S->Top];
   return x;
}

int main(){
	int x;
	struct Stack fS;
	Initalize(&fS);
	Push(&fS,10);
	Push(&fS,20);
	Push(&fS,30);
	Push(&fS,40);
    x=Pop(&fS);
	printf("\n%d",x);
	 x=Pop(&fS);
	printf("\n%d",x);
	 x=Pop(&fS);
	printf("\n%d",x);
	x=Pop(&fS);
	printf("\n%d",x);
	x=StackTop(&fS);
	x=IsEmpty(fS);
	printf("\n%d",x);

}

