#include <stdio.h>
void exchangesort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
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
printf("%d \t",arr[i]);
}
printf("\n");
exchangesort(arr,n);
printf("sorted array\n");
for(i=0;i<n;i++)
{
printf("%d \t",arr[i]);
}
printf("\n");
return 0;
}
