#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
void main(){
  int pattern,row;
  pattern = get_int("");
  row = get_int(" ");
 if(pattern == 1){
    for(int i=row;i>0;i--){
       for(int j=0;j<i;j++){
           printf("#");
       }
       printf("\n");
   }
  }
  else if(pattern == 2){
    for(int i=0;i<row;i++){
       for(int j=0;j<row-i-1;j++){
           printf(" ");
       }
       for(int j=0;j<=i;j++){
           printf("#");
       }
       printf("\n");
   }
  }
  else{
    printf("Invalid Option\n");
  }
}
