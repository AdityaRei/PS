#include<stdio.h>
int main(){
	int a[10][10],i,j,n,k=2,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	a[0][2]=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
     if(a[i][j]==0){
		if(i>0&&i>0){
			a[i][j]=a[i-1][j+1];
			a[i-1][j+1]=k;
			k++;
			i++;
			j++;
		}
	 }
	 else if(i<0&&j>0){
		a[i][j]=k;
		a[i-1][n-1]=a[i][j];
        k++;
	 }
	else if(i<0&&j<0){
		a[i][j]=k;
		a[n-1][j+1]=a[i][j];
		k++;
	 }
	 else{
		a[i][j]=k;
		a[i][j+1]=a[i][j];
		k++;
	 }
		}
}
for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}