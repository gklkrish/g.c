#include<stdio.h> 
int main()
{
int a,l,j=1;
scanf("%d",&a);
l=a;
while(a!=0)
{
a=a/10;
if(a!=0)
j++;
}
printf("%d",j);
}
