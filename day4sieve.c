#include<stdio.h>
#include<math.h>
int prime(int n);
int main(){
	int n,p;
	printf("Enter the number:");
	scanf("%d",&n);  
  p=prime(n);

  return p;
}
int prime(int n)
{
	int i,j;
	 int a[n];	
	 for(i=0;i<n;i++){
	     a[i]=0;
	 }
	for(i=2;i<=sqrt(n);i++)
	{
        if(a[i]==0)
		{
			for(j=i*i;j<=n;j=j+i)
			{
				a[j]=1;
			
			}
		}
		else{
			continue;
		}
	}
	for(i=2;i<=n;i++)
	{
		if(a[i]==0)
		{
			printf("%d ",i);
		}
	}
}