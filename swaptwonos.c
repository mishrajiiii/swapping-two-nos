#include<stdio.h>
int main()
{
  int x,y;
  
  printf("enter the two values which are to be swapped");
  scanf("%d %d",&x,&y);
  
  printf("the values before swapping are %d  %d  \n",x,y);
  
  x=x+y;
  y=x-y;
  x=x-y;
  
  printf("values after swapping are %d  %d",x,y);
  return 0;
}
