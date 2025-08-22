#include <stdio.h>
int main()
{
int a[10][10],i,j,c,r,c1,b[10][10],r1,m[10][10];
printf("enter the rows size");
scanf("%d",&r);
printf("enter the column size");
scanf("%d",&c);
for (i=0;i<r;i++){
for (j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}
for (i=0;i<r;i++){
for (j=0;j<c;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("enter the rows size");
scanf("%d",&r1);
printf("enter the column size");
scanf("%d",&c1);
for (i=0;i<r1;i++){
for (j=0;j<c1;j++){
scanf("%d",&b[i][j]);
}
}
for (i=0;i<r1;i++){
for (j=0;j<c1;j++){
printf("%d\t",b[i][j]);
}
printf("\n");
}
if(r==r1&&c==c1)
{
printf("sum of the matrix:\n");
for (i=0;i<r;i++){
for (j=0;j<c1;j++){
m[i][j]=a[i][j]+b[i][j];
printf("%d\t",m[i][j]);
}
printf("\n");
}
}
else{
printf("the order it not same matrix cannot be added");
}
return 0;
}
