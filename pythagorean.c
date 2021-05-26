#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
  int side1,side2,side3;
  printf("side 1 ");
  scanf("%d",&side1);
  printf("side 2 ");
  scanf("%d",&side2);
  printf("side 3 ");
  scanf("%d",&side3);
  
  if(side1>side2 && side1>side3){
    if(pow(side1,2)==(pow(side2,2)+pow(side3,2))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else if(side2>side3){
    if(pow(side2,2)==(pow(side1,2)+pow(side3,2))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else{
    if(pow(side3,2)==(pow(side2,2)+pow(side1,2))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
}
