#include<stdio.h>
#include<conio.h>
void main()
{
char ch,z='y';
int a=10,b=20,c;
clrscr();
while(1) {
 printf("\n Enter an operator ");
 scanf("%c",& ch);
 switch(ch){
case '+':
c=a+b; break;
case '-':
c=a-b; break;
case '*':
c=a*b; break;
case '/':
c=a/b; break;
default:
printf("enter a valid operator");
}
printf("%d %c %d = %d",a,ch,b,c);
z='y';
printf("\n to continue press y:");
scanf("%c",&z);
if (z=='y')
 break;
}
}

