#include<stdio.h>
int main(){
	int i,j,n,a[10][11],k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			a[i][j]=0;
		}
	}
	a[0][1]=1;
	for(i=0;i<n;i++){
		
		for(j=0;j<n+1;j++){
			if(i!=0&&j!=0){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
		}
	}
	for(i=0;i<n;i++){
		for(k=1;k<=n-i;k++){
			printf("  ");
		}
		for(j=0;j<n+1;j++){
			if(a[i][j]!=0){
				printf("%d   ",a[i][j]);
			}
		}
		printf("\n");
	}
}