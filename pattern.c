#include<stdio.h>
int main(){
	int n,i,s=0,m;
	scanf("%d",&n);
	while(n>0){
		m=n%10;
		s=s+m;
		n=n/10;
		n=s;	
		while(n>10){
			m=n%10;
		s=s+m;
		n=n/10;
		}
	}

    printf("%d",s);
return 0;
}