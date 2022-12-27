#include<stdio.h>
#include<string.h>
int main(){
	int i,flag=0;
	char a[32];
	gets(a);
	if(a[0]=='_'||a[0]>='A'&&a[0]<='Z'||a[0]>='a'&&a[0]<='z'){
		i=1;
		while(a[i]!='\0'){
			if(a[i]=='_'||a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'||a[i]>='0'&&a[i]<='9'||a[i]=='$'){
				i++;
			}
			else{
				flag=1;
			}

		}
	}
	else{
		flag=1;
	}
	if(flag==0){
		if(i<=32){
			printf("%d\n",i);
		printf("Valid");
		}
	}
	else{
		printf("Invalid");
	}
return 0;
}