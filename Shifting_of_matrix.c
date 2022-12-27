#include<stdio.h>
#include"stack.h"
int main(){
	int a[5][5],n,i,j,c[5][5],b[5][5],k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	// for(i=0;i<n;i++){
	// 	for(j=0;j<n;j++){
	// 		c[i][j]=a[j][i];
	// 		b[n-j-1][n-i-1]=c[i][j];
	// 		c[n-i-1][n-j-1]=b[i][j];
	// 	}
	// }
	// printf("\n");
	// for(i=0;i<n;i++){
	// 	for(j=0;j<n;j++){
	// 		printf("%d ",c[i][j]);
	// 	}
	// 	printf("\n");
	// }
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[j][n-i-1]);
		}
		printf("\n");
	}
return 0;
}