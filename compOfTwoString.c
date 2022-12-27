#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	int i,c=0;
	gets(a);
	gets(b);
  for(i=0;i<20;i++){
	if(a[i]==b[i]){
		c++;
	}
	else{
		break;
	}
  }
  if(i==20){
	printf("Yes");
  }
  else{
	printf("No");
  }
return 0;
} 