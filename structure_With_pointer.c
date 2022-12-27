#include<stdio.h>
#include<malloc.h>
struct Student
{
	int r_no;
	char name[20];
	double perc;
};
struct Student S[5];
void input(struct Student *ptr,int n){
    int i;
   for(i=0;i<n;i++){
	scanf("%d%s%lf",&((ptr+i)->r_no),(ptr+i)->name,&((ptr+i)->perc));
	}
}
 void output(struct Student *ptr,int n){
    int i;
  for(i=0;i<n;i++){
	printf("%d %s %lf\n",((ptr+i)->r_no),(ptr+i)->name,((ptr+i)->perc));
	}
 }
int main(){

	struct Student S[5];
    struct Student *ptr;	
	int i,n;	
	scanf("%d",&n);
	ptr=malloc(n*sizeof(struct Student));
	input(ptr,n);
    output(ptr,n);
return 0;
}