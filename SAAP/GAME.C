#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
 int a,b,i=1,j=1,k=1,z=1,l;
 char ch;
 clrscr();
 printf("%c",36);
 randomize();
 a=rand()%80+3;
 b=rand()%25+3;
 gotoxy(a,b);
  printf("%c",36);
 while(!kbhit())
 {
  delay(100);
  gotoxy(i+1,k);
   printf("%c",36);
  gotoxy(i-1,k);
   printf(" ");
  if(i==81)
   i=0;
  i++;
 }
 again: ch=getch();
 goto escape;
 repeat:
 a=rand()%80+3;
 b=rand()%25+3;
 gotoxy(a,b);
  printf("%c",36);
 escape:
 if(ch=='s')
 {
  j=i;
  for(l=1;l<=z;l++)
  {
  gotoxy(j-l,k);
   printf(" ");
  gotoxy(j,k-l);
   printf(" ");
  gotoxy(j+l,k);
   printf(" ");
  }
  while(!kbhit())
  {
  if(k==26)
  {
   for(l=1;l<=z;l++)
   {
   gotoxy(j+l,k-(l+2));
    printf(" ");
   gotoxy(j,k-l);
    printf(" ");
   }
  }
  delay(100);
  gotoxy(j,k+z);
   printf("%c",36);
  for(l=1;l<=z;l++)
  {
  gotoxy(j,k-l);
   printf(" ");
  }
  k++;
  if(j==a&&k==b)
  {
    ++z;
    goto repeat;
   }
  }
 goto again;
 }
 if(ch=='a')
 {
  for(l=1;l<=z;l++)
  {
  gotoxy(i,k-l);
   printf(" ");
  gotoxy(i,k+l);
   printf(" ");
  gotoxy(i,k);
   printf(" ");
  }
  while(!kbhit())
  {
   if(i==0)
   {
   for(l=1;l<=z;l++)
   {
   gotoxy(i+(l+3),k);
    printf(" ");
   gotoxy(i+l,k);
    printf(" ");
    i=81;
   }
   }
   delay(100);
   gotoxy(i-z,k);
    printf("%c",36);
   for(l=1;l<=z;l++)
   {
   gotoxy(i+l,k);
    printf (" ");
   }
   if(i==0)
    i=81;
   i--;
   if(i+1==a&&k==b)
   {
    ++z;
    goto repeat;
   }
  }
  goto again;
 }
 if(ch=='d')
 {
  for(l=1;l<=z;l++)
  {
  gotoxy(i,k-l);
   printf(" ");
  gotoxy(i,k);
   printf(" ");
  gotoxy(i,k+l);
   printf(" ");
  }
  while(!kbhit())
  {
   delay(100);
   gotoxy(i+z,k);
    printf("%c",36);
   for(l=1;l<=z;l++)
   {
   gotoxy(i-l,k);
    printf(" ");
   }
   if(i==81)
    i=0;
   i++;
   if(i==a&&k==b)
   {
    ++z;
    goto repeat;
   }
  }
  goto again;
 }
 if(ch=='w')
 {
  j=i;
  for(l=0;l<=z;l++)
  {
  gotoxy(j-l,k);
   printf(" ");
  gotoxy(j+l,k);
   printf(" ");
  }
  while(!kbhit())
  {
   if(k==0)
   {
    for(l=0;l<=z;l++)
    {
    gotoxy(j+l,k+(l+2));
     printf(" ");
    gotoxy(j,k+l);
     printf(" ");
    k=26;
    }
   }
   delay(100);
   gotoxy(j,k-z);
    printf("%c",36);
   for(l=1;l<=z;l++)
   {
   gotoxy(j,k+l);
    printf(" ");
   }
   if(k==0)
    k=26;
   k--;
   if(j==a&&k==b)
   {
   ++z;
   goto repeat;
   }
  }
  goto again;
 }
 getch();
}