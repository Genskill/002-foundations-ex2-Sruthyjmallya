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
    if(pow(double(side1),double(2))==(pow(double(side2),double(2))+pow(double(side3),double(2)))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else if(side2>side3){
    if(pow(double(side2),double(2))==(pow(double(side1),double(2))+pow(double(side3),double(2)))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
  else{
    if(pow(double(side3),double(2))==(pow(double(side2),double(2))+pow(double(side1),double(2)))){
      printf("Yes");
    }
    else{
      printf("No");
    }
  }
}
