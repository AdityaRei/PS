#include<stdio.h>
int main(){
	int i,j,k,n,c=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i+j-1);
			c++;
		}
		for(k=1;k<=i-1;k++){
			printf("%d ",(2*i-k-1));
		}
		printf("\n");
	}
	return 0;
}