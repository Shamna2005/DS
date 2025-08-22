#include <stdio.h>
void deletion(int arr[],int a,int *num)
{
int i;
if(*num==0)
{
printf("array is underflow");
return;
}
(*num)--;
}
int main()
{
int a[10],n,x,i;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("display the elements of an array\n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
deletion(a,x,&n);
printf("\ndeleted array is\n");
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
return 0;
}

