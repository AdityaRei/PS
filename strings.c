#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	int i,c,j,t;
	// scanf("%s",name);      //<can,t deal with space we will use the below function> 
	// printf("%s",name);
	gets(name);
	for(i=0;i<20;i++){
		if(name[i]!='\0'){
			c++;
		}
		else{
			// printf("%d",i);   //lengrth of the string;
			break;
		}
	}
i=i-1;
j=0;
while(j<i){
	// t=name[i];
	// name[i]=name[j];  //Reverse of the array
	// name[j]=t;
	if(name[j]!=name[i]){
		c=1;
	}
	j++;
	i--;
}
// printf("%s",name);
if(c==1){
	printf("Not Paliindrome");
}
else{
	printf("Palindrome");
}
return 0;
}