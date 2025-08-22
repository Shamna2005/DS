#include <stdio.h>
void deletion(int arr[],int a,int *num)
{
int i;
if(*num==0)
{
printf("array is underflow");
return;
}
for(i=0;i<*num;i++)
{
if(a==arr[i]){
break;
}
}
for( ;i<*num-1;i++)
{
arr[i]=arr[i+1];
}
(*num)--;
}

int main()
{
int a[10],n,x,i;
printf("enter the array size");
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
printf("\nenter the deleted array element\n");
scanf("%d",&x);
deletion(a,x,&n);
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
return 0;
}



