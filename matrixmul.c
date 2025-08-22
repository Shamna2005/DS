#include <stdio.h>
int main()
{
int a[10][10],i,j,c,r,c1,b[10][10],r1,m[10][10],k;
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
printf("multiplication\n");
for (i=0;i<r;i++){
for (j=0;j<c1;j++){
m[i][j]=0;
}
}
for (i=0;i<r;i++){
for (j=0;j<c1;j++){
for(k=0;k<c;k++){
m[i][j]=a[i][j]*b[i][j];
}
}
}
for (i=0;i<r;i++){
for (j=0;j<c1;j++){
printf("%d\t",m[i][j]);
}
printf("\n");

}
}

