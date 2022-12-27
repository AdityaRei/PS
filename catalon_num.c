#include<stdio.h>
int catalon_num(int n)
{
	int sum=0,i;
	if(n==0)
	{
		return 1;
	}
	if (n==1)
	{
		return 1;
	}
	else
	{
		// sum=0;
		for(i=0;i<n-1;i++)
		{
			sum=sum+(catalon_num(n-1-i)*catalon_num(i));
		}
		return sum;
	}
}
int main(){
	int n,x;
	scanf("%d",&n);
	x=catalon_num(n);
	printf("%d",x);
return 0;
}