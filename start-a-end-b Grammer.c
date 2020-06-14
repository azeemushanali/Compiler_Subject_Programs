#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int s,q0,q1,q2,dead,i;
printf("Enter a binary string:");
gets(a);
s=q0;
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a' && s==q0)
s=q1;

else if(a[i]=='b' && s==q0)
s=dead;

else if(a[i]=='a' && s==q1)
s=q1;

else if(a[i]=='b' && s==q1)
s=q2;

else if(a[i]=='a' && s==q2)
s=q1;

else if(a[i]=='b' && s==q2)
s=q2;

}
if(s==q2)
printf("String is accepted.");
else
printf("String is not accepted.");
getch();
}
