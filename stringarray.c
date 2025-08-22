#include <stdio.h>
#include <string.h>
void main()
{
char txt[20],patt[10];
int x,y,i,j,f;
printf("enter the string");
scanf("%s",txt);
printf("enter your pattern");
scanf("%s",patt);
x=strlen(txt);
y=strlen(patt);
for(i=0;i<=x-y;i++)
{

for(j=0;j<y;j++)
{
if(txt[i+j]!=patt[j])
{
break;
}
}
if(j==y)
{
f=1;
break;
}
}
if(f==1)
{
printf("pattern is found %d\n",i);
}
else{
printf("not found");
}
}


