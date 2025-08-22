#include <stdio.h>
#define MAX 100
void insert(int a[],int x,int *n,int pos)
{
if(*n==MAX)
{
printf("array is overflow");
return;
}
else{
for(int i=*n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=x;
(*n)++;
}
}
int main()
{
int num,n,arr[MAX],i,pos;
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
printf("insert position");
scanf("%d",&pos);
insert(arr,num,&n,pos);
printf("enter the elements of an array");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}
