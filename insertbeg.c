#include <stdio.h>
#define MAX 100
void insert(int a[],int x,int *n)
{
if(*n==MAX)
{
printf("array is overflow");
return;
}
else{
for(int i=*n;i>0;i--)
{
a[i]=a[i-1];
}
a[0]=x;
(*n)++;
}
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
insert(arr,num,&n);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}
