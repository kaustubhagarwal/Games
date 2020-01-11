#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio>
void main()
{
randomize();
int green=0;
int yellow=0;
int red=0;
int u[10]={9157,8103,3801,1490,7219,2504,5120,1970,6158,4621};
int m=random(10);
randomize();
int s=u[m];
int k;
cout<<"The game is such that you have to enter a 4 digit number which is then compared with a number generated randomly. No digit in the number is repeated and cannot be repeated by the user as well."<<endl;
cout<<"You have 8 attempts to get the answer. All the best!";
getch();
clrscr();
for(int re=0;re<8;re++)
{
cout<<"Enter the 4 digit number"<<endl;
cin>>k;
for(int i=10;i<=10000;i=i*10)
{
if(s%i/(i/10)==k%i/(i/10))
green++;
for(int j=10;j<=10000;j=j*10)
{
if(s%i/(i/10)==k%j/(j/10)&&(s%i/(i/10)!=k%i/(i/10)))
yellow++;
}
}
if(green==4)
{
cout<<"You guessed it right";
getch();
exit(0);
}
else
{
cout<<"Green="<<green<<endl;
cout<<"Yellow="<<yellow<<endl;
cout<<"Red="<<(4-yellow-green)<<endl;
green=0;
yellow=0;
red=0;
}
}
cout<<"The correct number is ";
cout<<s;
getch();
}