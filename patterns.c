#include<stdio.h>
#include<cs50.h>
void main()
{
  int pattern,row,i,j;
  pattern=get_int("");
  row =  get_int("");
  if(pattern == 1){
    for(i=row;i>0;i--){
      for(j=0;j<i;j++){
        printf("#");
      }
      printf("\n");
    }
  }
  else if(){
    for(i=row;i>0;i--){
      for(j=1;j<=row;j++){
        if(j<i){
          printf(" ");
        }
        else{
          printf("#");
        }
      }
      printf("\n");
    }
  }
  else{
    printf("Invalid Option");
  }
}

