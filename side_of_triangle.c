#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the three sides of the triangle\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b&&a==c){
    printf("Equilateral triangle");
 }
 else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)){
    printf("Isosceles triangle");
 }
 else if(a!=b&&a!=c){
    printf("Scalene triangle");
 }
 return 0;
}
