/* write a program to enter enter any number and print it in revrse
date:31/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,r,c=0;
  clrscr();
  printf("\n enter any number:");
  scanf("%d",&a);
  a=c;
  while(a>0)
  {
     r=a%10;
     c=c*10+r;
     a=a/10;
  }
  printf("\n reverse number is %d",c);
  getch();
}