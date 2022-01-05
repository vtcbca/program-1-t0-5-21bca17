/* write a program to enter any number and cheak number
 is palindrome number or not date:31/12/21*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
   int n,c,s=o,r;
   clrscr;
   printf("\n enter any number:");
   scanf("%d",&n);
   c=n;
   while (n>o)
   {
      r=n%10;
      s=r+s*10;
      n=n/10;
   }
   if (c==5)
   printf("\n this is a palindrome number");
   else
   printf("\n is not a palindrome number");
   getch();
 }