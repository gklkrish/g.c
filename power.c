
#include<stdio.h>
int main()
{
int result=1,base,EXponent;
scanf("%d",&base);
scanf("%d",&EXponent);
while(EXponent!=0)
{
result=result*base;
EXponent--;
}
printf("%d",result);
}
