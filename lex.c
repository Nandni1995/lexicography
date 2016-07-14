#include<stdio.h>
#include<conio.h>
void main()
{
char a,b;
clrscr();
printf("Enter the strings:");
scanf("%c%c",&a,&b);
if(a>b)
{
printf("%c is greatest string",a);
}
else if(b>a)
{
printf("%c is greatest string",b);
}
else
{
printf("Both are equal");
}
getch();
}
