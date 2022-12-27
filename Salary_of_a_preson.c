#include<stdio.h>
int main(){
  float base,hra,da,pf,t=0.0,allow;
  char g;
  scanf("%f/n",&base);
  scanf("%s",&g);
  if(g=='A'){
    allow=1700.0;
  }
  else if(g=='B'){
        allow=1500.0;
}
  else if(g=='C'){
    allow=1300.0;
  }
  hra=base/5.0;
  da=base/2.0;
  pf=(base*11.0)/100.0;
  t=base+hra+da+allow-pf;
  printf("The net salary is%f\n",t);
  return 0;
}
