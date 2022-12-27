#include <stdio.h>

int main(void) {
  int a;
  printf("Enter the year\n");
  scanf("%d",&a);
 (a%4==0 && (a%100!=0||a%400==0))?printf("Its a leap year"):printf("Its not a leap year");
  return 0;

}
