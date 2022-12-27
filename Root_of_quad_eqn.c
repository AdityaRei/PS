#include <stdio.h>
#include<math.h>
int main() {
  float a,b,c,d,x1,x2,r;
  printf("Enter your cofficient of x^2\n");
  scanf("%f",&a);
  printf("Enter cofficient of x\n");
  scanf("%f",&b);
  printf("Enter your constant\n");
  scanf("%f",&c);
  d=b*b-(4*a*c);
  r=sqrt(-d);
  if(d==0){
	printf("The roots are equal\n");
	x1=(-b+ sqrt(d))/(2*a);
	printf("The both roots are %.3f\n",x1);
  }
 else if(d>=0){
    printf("Roots are real distinct\n");
    x1= (-b+ sqrt(d))/(2*a);
  printf("The first root is %f\n",x1);
   x2= (-b-sqrt(d))/(2*a);
    printf("The second root is %f\n",x2);
  }
  else if(d<0){
    printf("The roots are imagimary\n");
    printf("The first root of the equation %.3f+i%.3f\n",-b/(2*a),r/2*a);
    printf("The second root of the equation %.3f-i%.3f",-b/(2*a),r/2*a);
      }
  return 0;
}