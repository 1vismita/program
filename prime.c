#include<stdio.h>
int i,n;
void main()
{
scanf("%d",&n);
if(n<3)
printf("number \n");
else
{
    if(n>=3)
    {
    for(i=0;i<n;i++)
{
    if(n/i==0)
{
printf("prime no \n");
}
else
printf("not a prime\n");
}
}
}
}

