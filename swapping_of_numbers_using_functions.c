#include<stdio.h>
int main(){
  int a,b;
  int swap(int,int);
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  swap(a,b);

}
int swap(int x,int y)
{
  int z;
  z=x;
  x=y;
  y=z;
  printf("The swapped numbers are %d and %d",x,y);

}
