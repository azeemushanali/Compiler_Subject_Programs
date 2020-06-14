#include<stdio.h>
#include<conio.h>

int main(){

char q[20];
int s,I,i;
printf("Enter the string-\n");
scanf("%s",q);
s=0;
for(I=0;q[I]!=NULL;I++)
{
if(q[I]=='o'&&s=='o')
{
s=1;
}
else if(q[I]=='o'&&s==1)
s=0;
}
if(s==0)
printf("String is accepted");
else
printf("String is not accepted");
return 0;
}

