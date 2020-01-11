/* Welcome to this game: Bambush
The objective of this game is to score more runs than your opponents.
If you win the toss you can choose to bowl or bat first.
While batting, your objective is to not get the same number as the computer or you will get out.
Each number you put which is different from the computer's name is added to your score as runs.
Similarly, you have to try to get the computer out while bowling.
Hope you enjoy!
Created by: Kaustubh Agarwal
Created for: Miscellanous game project (Class 12)
*/

#include<iostream>
#include<conio>
#include<stdlib>
#include<stdio>
#include<fstream>
void main()
{
ofstream f;
int x=0;
f.open("Scores.txt",ios::app);
int second=1;
char name[20];
cout<<"Enter name"<<endl;
cin>>name;
f<<name<<"\n";
randomize();
int toss=random(2);
char s[2][10]={"Bat","Bowl"};
int choice;
cout<<"Enter 0 for heads and 1 for tails"<<endl;
cin>>choice;
int first;
randomize();
if(choice==toss)
{
cout<<"You won the toss. Enter 0 for batting first and 1 for bowling"<<endl;
cin>>first;
cout<<endl;
}
else if(choice!=toss)
{
first=random(2);
randomize();
cout<<"You have to "<<s[first]<<" first"<<endl;
}
int num;
int sum=0;
int flag=1;
int comp;
if(first==0)
{
while(flag==1)
{
cout<<endl<<"Enter your number";
cin>>num;
comp=random(7);
randomize();
cout<<"Computer entered "<<comp<<endl;
if(comp==num)
{
cout<<"You are out"<<endl;
cout<<"Your score is"<<sum<<endl;
flag=0;
}
else
sum=sum+num;
}
int sec=1;
cout<<"Now you have to bowl"<<endl;
while(sec==1)
{
cout<<endl<<"Enter your number";
cin>>num;
while(num>6 || num<1)
{
cout<<"Invalid number. Enter a number between 0 and 6";
cin>>num;
}
comp=random(7);
cout<<"Computer entered "<<comp<<endl;
if(second>sum)
{
cout<<endl<<"You lose";
x=second-sum;
f<<"You lost by "<<x<<" runs";
getch();
goto et;
}
if(comp==num)
{
cout<<endl<<"Well bowled "<<endl<<"You win";
x=sum+1;
f<<"You won by scroing "<<x<<" runs";
getch();
goto et;
}
else
second=second+comp;
}
}
if(first==1)
{
while(flag==1)
{
cout<<endl<<"Enter your number";
cin>>num;
while(num>6 || num<1)
{
cout<<"Invalid number. Enter a number between 0 and 6";
cin>>num;
}
comp=random(7);
randomize();
cout<<"Computer entered "<<comp<<endl;
if(comp==num)
{
cout<<endl<<"Well Bowled"<<endl;
cout<<endl<<"Computer scored "<<sum<<endl;
flag=0;
}
else
sum=sum+comp;
}
int sece=1;
while(sece==1)
{
cout<<endl<<"Enter your number";
cin>>num;
while(num>6 || num<1)
{
cout<<"Invalid number. Enter a number between 0 and 6";
cin>>num;
}
comp=random(7);
cout<<"Computer entered "<<comp<<endl;
if(second>sum)
{
cout<<endl<<"You win";
x=sum+1;
f<<"You won by scoring "<<x<<"runs"<<endl;
getch();
goto et;
}
if(comp==num)
{
cout<<endl<<"You are out "<<endl<<"You lose";
x=second-sum;
f<<"You lost by "<<x<<" runs";
sece=0;
goto et;
}
else
second=second+comp;
}
}
et:
cout<<endl<<"You can view your previous scores and this score in the file 'Scores.txt'";
getch();
f.close();
}

