#include <stdio.h>
int main()
{
int num,n,arr[100],i;
printf("enter the the limit of an array");
scanf("%d",&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the elements of an array \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
