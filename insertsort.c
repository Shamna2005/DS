#include<stdio.h>
void insertsort(int a[],int n)
{
int i,j,x;
for(i=1;i<n;i++)
{
x=a[i];
for(j=i-1;j>=0&&x<a[j];j--)
{
a[j+1]=a[j];
}
a[j+1]=x;
}
}
int main()
{
int arr[10],i,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the element of the array\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("display array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
insertsort(arr,n);
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
