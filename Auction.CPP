/*
Created by Kaustubh Agarwal
kaustubhagarwal@hotmail.com
Created for: Class 12 Project
*/
/* This is a Cricket Player Auction Game. You will be asked if you want to bid for a player. If you wish to bid, press y, else press n.
If you have pressed y, it will ask you your bid. You have to bid above the base price of the player. Other teams will compete with you for the same player.
Each player has a skill set will you can see against their names.
You have 18000 as cash for your auction. Choose your team wisely.
The team with highest total skill sets wins.
You can see the results in a textfile "Dreamteam.txt" to see how well you did compared to others who played this game on that PC.
Happy Playing!
*/
#include<iostream>
#include<conio>
#include<stdio>
#include<stdlib>
#include<fstream>
void main()
{
int gott=0;
ofstream fout;
fout.open("Dreamteam.txt",ios::app);
int bal=18000;
int add;
int s=random(8);
randomize();
char ch;
cout<<"Enter y for continuing bid or n for passing the player"<<endl;
cout<<"You have 18000 L for bidding"<<endl;
cout<<"The first 10 players are marquee, the next 10 are elite and the last 5 are good and they cost according to how well they play."<<endl;
cout<<"You have to make a team of 11 players so don't waste your money too soon."<<endl;
cout<<"Make the best possible team so that you can show your friends and family the hidden bidding talent in you."<<endl;
cout<<"ENJOY!"<<endl;
int bid,yourbid;
int bat=0;
int bowl=0;
int field=0;
int overall=0;
char team[8][40]={"Mumbai Indians","Chennai Super Kings","Royal Challengers Bangalore","Rajasthan Royals","Kings XI Punjab","Sunrisers Hyderabad","Delhi Daredevils","Kolkata Knight Riders"};
char marind[25][100]={"1.Rohit Sharma BAT-9 BOWL-5 FIELD-8,","2.A.B. De Villiers BAT-10 BOWL 1 FIELD-10,","3.Virat Kohli BAT-10 BOWL-4 FIELD-10,","4.K.L. Rahul BAT-10 BOWL-0 FIELD-10,","5.Sunil Narine BAT-8 BOWL-9 FIELD-5,","6.Andrew Tye BAT-4 BOWL-10 FIELD-7,","7.M.S.Dhoni BAT-9 BOWL-1 FIELD-10,","8.Rashid Khan BAT-7 BOWL-9 FIELD-8,","9.Hardik Pandya BAT-7 BOWL-7 FIELD-10,","10.Shane Watson BAT-8 BOWL-7 FIELD-7,","11.Jasprit Bumrah BAT-1 BOWL-10 FIELD-7,","12.Umesh Yadav BAT-5 BOWL-8 FIELD-6,","13.Jos Buttler BAT-9 BOWL-0 FIELD-9,","14.Alex Hales BAT-8 BOWL-0 FIELD-9,","15.Trent Boult BAT-2 BOWL-9 FIELD-8,","16.Suresh Raina BAT-7 BOWL-5 FIELD-9,","17.Glenn Maxwell BAT-7 BOWL-5 FIELD-7,","18.Eoin Morgan BAT-8 BOWL-0 FIELD-8,","19.Chris Gayle BAT-8 BOWL-5 FIELD-6,","20.Krunal Pandya BAT-6 BOWL-6 FIELD-8,","21.Rhishabh Pant BAT-8 BOWL-0 FIELD-9,","22.Manish Pandey BAT-7 BOWL-0 FIELD-9,","23.Colin Munro BAT-9 BOWL-1 FIELD-7,","24.Shardul Thakur BAT-4 BOWL-7 FIELD-6,","25.Shakib Al Hasan BAT-5 BOWL-7 FIELD-5,"};
char name[100];
cout<<"Enter your dream team name: ";
cin>>name;
for(int z=0;z<strlen(name);z++)
{
fout<<name[z];
}
fout<<',';
fout<<endl;
for(int i=0;i<25;i++)
{
if(gott==11)
goto sed;
else if(i==0)
bid=1950+random(200);
else if(i==1)
bid=2000+random(200);
else if(i==2)
bid=2100+random(200);
else if(i==3)
bid=1900+random(200);
else if(i==4)
bid=1950+random(200);
else if(i==5)
bid=2000+random(200);
else if(i==6)
bid=1950+random(200);
else if(i==7)
bid=2100+random(200);
else if(i==8)
bid=2100+random(200);
else if(i==9)
bid=1950+random(200);
else if(i==10)
bid=1800+random(200);
else if(i==11)
bid=1800+random(200);
else if(i==12)
bid=1550+random(200);
else if(i==13)
bid=1450+random(200);
else if(i==14)
bid=1750+random(200);
else if(i==15)
bid=1400+random(200);
else if(i==16)
bid=1450+random(200);
else if(i==17)
bid=1350+random(200);
else if(i==18)
bid=1500+random(200);
else if(i==19)
bid=1560+random(200);
else if(i==20)
bid=1450+random(200);
else if(i==21)
bid=1400+random(200);
else if(i==22)
bid=1450+random(200);
else if(i==23)
bid=1390+random(200);
else if(i==24)
bid=1200+random(200);
yourbid=0;
if(bal<200)
{
cout<<endl<<"You cannot bid anymore";
goto end;
}
cout<<endl<<marind[i]<<endl;
cout<<"Base price= 200L"<<endl;
cout<<"Bid?";
cin>>ch;
if(ch=='y'||ch=='Y')
{
for(;bid>=yourbid;)
{
bie:
cout<<"Enter your bid";
cin>>yourbid;
if(yourbid<200)
{
cout<<"Enter a bid above 200L"<<endl;
goto bie;
}
if(yourbid>bal)
{
cout<<"You cannot bid this much amount"<<endl;
goto lab;
}
bi:
cout<<"Your highest bid="<<yourbid<<endl;
randomize();
if(yourbid<=bid)
{
randomize();
cout<<"Current highest bid="<<(yourbid+50)<<" by "<<team[s]<<endl;
randomize();
cout<<"Bid?";
cin>>ch;
if(ch=='y'||ch=='Y')
{
uppa:
cout<<"How much to add to previous bid?";
cin>>add;
if(add==0)
{
cout<<"Enter a valid bid"<<endl;
goto uppa;
}
yourbid=add+yourbid+50;
goto bi;
}
if(yourbid>bal)
{
cout<<"You cannot bid this much"<<endl;
goto lab;
}
if(ch=='n'||ch=='N')
goto sun;
}
if(yourbid>bid)
{
gott++;
cout<<"Congratulations, you have got "<<marind[i]<<" in your team for "<<yourbid<<endl;
cout<<"Your current balance is "<<(bal-yourbid)<<endl;
bal=bal-yourbid;
if(i==0)
{
bat+=9;
bowl+=5;
field+=8;
}
else if(i==1)
{
bat+=10;
bowl+=1;
field+=10;
}
else if(i==2)
{
bat+=10;
bowl+=4;
field+=10;
}
else if(i==3)
{
bat+=10;
bowl+=0;
field+=10;
}
else if(i==4)
{
bat+=8;
bowl+=9;
field+=5;
}
else if(i==5)
{
bat+=4;
bowl+=10;
field+=7;
}
else if(i==6)
{
bat+=9;
bowl+=1;
field+=10;
}
else if(i==7)
{
bat+=7;
bowl+=9;
field+=8;
}
else if(i==8)
{
bat+=7;
bowl+=7;
field+=10;
}
else if(i==9)
{
bat+=8;
bowl+=7;
field+=7;
}
else if(i==10)
{
bat+=1;
bowl+=10;
field+=7;
}
else if(i==11)
{
bat+=5;
bowl+=8;
field+=6;
}
else if(i==12)
{
bat+=9;
bowl+=0;
field+=9;
}
else if(i==13)
{
bat+=8;
bowl+=0;
field+=9;
}
else if(i==14)
{
bat+=2;
bowl+=9;
field+=8;
}
else if(i==15)
{
bat+=7;
bowl+=5;
field+=9;
}
else if(i==16)
{
bat+=7;
bowl+=5;
field+=7;
}
else if(i==17)
{
bat+=8;
bowl+=0;
field+=8;
}
else if(i==18)
{
bat+=8;
bowl+=5;
field+=6;
}
else if(i==19)
{
bat+=6;
bowl+=6;
field+=8;
}
else if(i==20)
{
bat+=8;
bowl+=0;
field+=9;
}
else if(i==21)
{
bat+=7;
bowl+=0;
field+=9;
}
else if(i==22)
{
bat+=9;
bowl+=1;
field+=7;
}
else if(i==23)
{
bat+=4;
bowl+=7;
field+=6;
}
else if(i==24)
{
bat+=5;
bowl+=7;
field+=5;
}
char plana[40];
strcpy(plana,marind[i]);
for(int z=0;z<strlen(plana);z++)
fout<<plana[z];
fout<<endl;
goto lab;
}
}
}
if(ch=='n'||ch=='N')
{
sun:
int o=random(8);
randomize();
cout<<team[o]<<" has won "<<marind[i]<<endl;
goto lab;
}
lab:
}
end:
{
sed:
cout<<endl<<"You have come to an end of your auction"<<endl;
}
overall=bat+bowl+field;
fout<<"\n"<<"Bat overall="<<bat<<","<<"\n";
fout<<"Bowl overall="<<bowl<<","<<"\n";
fout<<"Field overall="<<field<<","<<"\n";
fout<<"Team score="<<overall<<",";
fout.close();
ifstream fin;
fin.open("dreamteam.txt");
char f;
cout<<endl;
while(!fin.eof())
{
if(f==',')
cout<<endl;
fin>>f;
cout<<f;
}
cout<<"You can view the team you made in this auction by visiting a file by the name 'dreamteam' in the same folder as this C++ program."<<endl;
getch();
}