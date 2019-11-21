#include<stdio.h>
int main()
{

int i,j,a[10][10],n;
scanf("%d",&n);
printf("enter the mittu stones");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]==1)
{
if(a[i][j+1]==1)
{printf("a[%d][%d]\n",i,j);}
if(a[i+1][j]==1)
{printf("a[%d][%d]\n",i,j);}
}
}
}
printf("a[%d][%d]",n-1,n-1);
return 0;
}


