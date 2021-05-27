#include<stdio.h>
#include<cs50.h>
void main()
{
int option,rows,i,j;
option=get_int("");
if(option==1)
{
rows=get_int("");
for(i=rows;i>0;i--)
{
for(j=0;j<i;j++)
{
printf("#");
}
printf("\n");
}
}
else if(option==2)
{
rows=get_int("");
for(i=rows;i>0;i--)
{
for(j=1;j<=rows;j++)
{
if(j>=i)
printf("#");
else
printf(" ");
}
printf("\n");
}
}
else
printf("Invalid entry");
}
