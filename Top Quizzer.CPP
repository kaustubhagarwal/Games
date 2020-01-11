#include<iostream>
#include<conio>
#include<stdlib>
#include<stdio>
#include<fstream>
void main()
{
char name[20];
char x;
char t;
int s=0;
cout<<"This is a quiz written in c++ language.To answer the quiz, you have to type in the option letter which according to you is the right answer and press enter.";
cout<<endl<<"Please note: This quiz has a special feautre in which u can double the points you earn by answering the question correct by entering m or M followed by the correct option.";
cout<<endl<<"However if you get a wrong answer after you have attempted doubling the answer's point's as told above, you will lose 1 point";
cout<<endl<<"So, be sure of your answer if you are planning to double the point's on that question";
cout<<endl<<"After you have entered an answer, a screen will appear showing wheter you have entered the right answer or not.";
cout<<endl<<"After reading the instructions carefully press enter and start the quiz. All the best!!"<<endl;
getch();
clrscr();
cout<<"Please enter your name"<<endl;
cin>>name;
clrscr();
{
cout<<"Q1.Who was the second man to set foot on the moon?"<<"\n"<<"a.Neil Armstrong"<<"\n"<<"b.Rakesh Chopra"<<endl<<"c.Edwin Aldrin"<<endl<<"d.Russel Arnold"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='c'||t=='C')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='c'&&t!='C')
{
clrscr();
cout<<"Wrong.The answer is Edwin Aldrin";
getch();
s=s-1;
clrscr();
}
}
clrscr();
if(x=='c'||x=='C')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Edwin Aldrin";
getch();
}
clrscr();
}
{
cout<<"Q2.Which scientist gave three famous laws of gravity?"<<endl<<"a.Neil Bohr"<<endl<<"b.Sir Isaac Newton"<<endl<<"c.Yves Chauvin"<<endl<<"d.Madam Marie Curie"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='b'||t=='B')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='b'&&t!='B')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Sir Isaac Newton";
getch();
clrscr();
}
}
clrscr();
if(x=='b'||x=='B')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Sir Isaac Newton";
getch();
}
clrscr();
}
{
cout<<"Q3.Who runner is famously known as the 'flying sikh'?"<<endl<<"a.Milkha Singh"<<endl<<"b.Usain Bolt"<<endl<<"c.Boota Singh"<<endl<<"d.David Pellegri"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='a'||t=='A')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='a'&&t!='A')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Milkha Singh";
getch();
clrscr();
}
}
clrscr();
if(x=='a'||x=='A')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Milkha Singh";
getch();
}
clrscr();
}
{
cout<<"Q4.Who was the founder of NASA?"<<endl<<"a.Dwight D. Eisenhower"<<endl<<"b.John F. Kennedy"<<endl<<"c.Franklin D. Roosevelt"<<endl<<"d.George H.W. Bush"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='a'||t=='A')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='a'&&t!='A')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Dwight D. Eisenhower";
getch();
clrscr();
}
}
clrscr();
if(x=='a'||x=='A')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Dwight D. Eisenhower";
getch();
}
clrscr();
}
{
cout<<"Q5.Which company had the highest turnover in 2017?"<<endl<<"a.Apple"<<endl<<"b.China National Petroleum"<<endl<<"c.Toyota motors"<<endl<<"d.Sinopec group"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='d'||t=='D')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='d'&&t!='D')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Sinopec group";
getch();
clrscr();
}
}
clrscr();
if(x=='d'||x=='D')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Sinopec group";
getch();
}
clrscr();
}
{
cout<<"Q6.When did World War-II end?"<<endl<<"a.1931"<<endl<<"b.1949"<<endl<<"c.1945"<<endl<<"d.1947"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='c'||t=='C')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='c'&&t!='C')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is 1945";
getch();
clrscr();
}
}
clrscr();
if(x=='c'||x=='C')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is 1945";
getch();
}
clrscr();
}
{
cout<<"Q7.Which team has won the most cricket world cups?"<<endl<<"a.India"<<endl<<"b.West Indies"<<endl<<"c.South Africa"<<endl<<"d.Australia"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='d'||t=='D')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='d'&&t!='D')
{
clrscr();
s=s-1;
cout<<"Wrong.The Answer is Australia";
getch();
clrscr();
}
}
clrscr();
if(x=='d'||x=='D')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The Answer is Australia";
getch();
}
clrscr();
}
{
cout<<"Q8.Which among these discovered America first?"<<endl<<"a.Christopher Columbus"<<endl<<"b.Leif Eriksson"<<endl<<"c.Captain Cook"<<endl<<"d.Marco Polo"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='b'||t=='B')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='b'&&t!='B')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Leif Eriksson";
getch();
clrscr();
}
}
clrscr();
if(x=='b'||x=='B')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Leif Eriksson";
getch();
}
clrscr();
}
{
 cout<<"Q9.Which is the smallest island in the world ?"<<endl<<"a.Austarlia"<<endl<<"b.Hawaii"<<endl<<"c.Bishop Rock"<<endl<<"d.Andoman"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='c'||t=='C')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='c'&&t!='C')
{
clrscr();
s=s-1;
cout<<"Wrong.The answer is Bishop Rock";
getch();
clrscr();
}
}
clrscr();
if(x=='c'||x=='C')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Bishop Rock";
getch();
}
clrscr();
}
{
cout<<"Q10.Which movie character is also called the first avenger?"<<endl<<"a.Steve Rogers"<<endl<<"b.Bruce Banner"<<endl<<"c.Tony Stark"<<endl<<"d.Thor"<<endl;
cin>>x;
if(x=='m'||x=='M')
{
cin>>t;
if(t=='a'||t=='A')
{
clrscr();
s=s+2;
cout<<"Correct";
getch();
clrscr();
}
else if(t!='a'&&t!='A')
{
s=s-1;
clrscr();
cout<<"Wrong.The answer is Steve Rogers";
getch();
clrscr();
}
clrscr();
if(x=='a'||x=='A')
{
cout<<"Correct";
s++;
getch();
}
else if(x!='M'&&x!='m')
{
cout<<"Wrong.The answer is Steve Rogers";
getch();
}
clrscr();
}
cout<<"Your score is="<<s<<"/20";
if(s==17||s==18||s==19||s==20)
cout<<endl<<"Well done.";
else if(s==13||s==14||s==15||s==16)
cout<<endl<<"Good job.";
else if(s==9||s==10||s==11||s==12)
cout<<endl<<"Good attempt";
else if(s==5||s==6||s==7||s==8)
cout<<endl<<"Could do better";
else if(s==4||s==3||s==2||s==1)
cout<<endl<<"Learn more and try again";
else
cout<<endl<<"Really need to learn and try again";
getch();
}
}
