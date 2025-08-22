#include <stdio.h>
#define MAX 100
void insertend(int arr[],int *n,int x)
{
if(*n==MAX)
{
printf("array is overflow");
return;
}
arr[*n]=x;
(*n)++;
}
int main()
{
int num,n,arr[MAX],i;
printf("enter the the limit of an array");
scanf("%d",&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("insert element");
scanf("%d",&num);
insertend(arr,&n,num);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}
