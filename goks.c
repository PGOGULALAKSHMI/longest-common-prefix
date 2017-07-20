
#include<stdio.h>
int main()
{
int i;
char a[20],b[20],c[20],d[20];
scanf("%s%s%s%s",a,b,c,d);
 for(i=0;i<20;i++)
 {
 if(a[i]==b[i] && b[i]==c[i] && c[i]==d[i] && d[i]==a[i])
 {
 printf("%c",a[i]);
 }
 else
 {
 break;
 }
 }
 return 0;
}
