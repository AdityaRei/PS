#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c,i;
    gets(a);
	gets(b);
	for(i=0;i<20;i++){
		if(a[i]!='\0'){
			c++;
		}
		else{
			break;
		}
	}
	printf("%d\n",c);
	for(i=c;b[i-c]!='\0';i++){
		a[i]=b[i-c];
	}
	a[i]='\0';
	puts(a);
return 0;
}