#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int pow(int x,int y){
  int power = 1;
  for(int i=0;i<y;i++){
    power *= x;
  }
  return power;
}
void main(){
  int side1,side2,side3;
  int hyp,other;
  printf("side 1 ");
  scanf("%d",&side1);
  printf("side 2 ");
  scanf("%d",&side2);
  printf("side 3 ");
  scanf("%d",&side3);
  
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
