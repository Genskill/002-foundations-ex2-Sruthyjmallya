#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double pow(double x,double y){
  double power = 1;
  for(int i=0;i<y;i++){
    power *= x;
  }
  return power;
}
void main(){
  double side1,side2,side3;
  double hyp,other;
  char str[30];
  printf("side 1 ");
  side1 = atoi(gets(str));
  printf("side 2 ");
  side2 = atoi(gets(str));
  printf("side 3 ");
  side3 = atoi(gets(str));
  
  if(side1>side2 && side1>side3){
    hyp = pow(side1,2);
    other = pow(side2,2)+pow(side3,2);
    if(hyp == other){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else if(side2>side3){
    hyp = pow(side2,2);
    other = pow(side1,2)+pow(side3,2);
    if(hyp == other){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else{
    hyp = pow(side3,2);
    other = pow(side1,2)+pow(side2,2);
    if(hyp == other){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
}
