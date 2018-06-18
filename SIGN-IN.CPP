#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespacex std:
void main()
{
clrscr();
char u1,u2,p1[20],p2[20];
int i,j,k,m,n,flag1=0,flag2=0;
cout<<"*** Sign Up ***"<<endl;
cout<<"Enter your username :"<<endl;
cin.get(u1);
cout<<"Enter your password :"<<endl;
cin.get(p1,20);
cout<<"*** Sign-In ***"<<endl;
for(i=0;i<3;i++)
{
cout<<"Enter your username :"<<endl;
cin.get(u2);
int s1=strlen(u1);
int s2=strlen(u2);
for(j=0,k=0;j<=s1,k<=s2;j++,k++)
{
if(u1[j]!=u2[k])
flag1=1;
}
if(flag1==0)
cout<<"Username correct ."<<endl;
else
cout<<"Incorrect Username ."<<endl;
cout<<"Enter the password :"<<endl;
cin.get(p2,20);
int s3=strlen(p1);
int s4=strlen(p2);
for(m=0,n;m<=s3,n<=s4;m++,n++)
{
if(p1[m]!=p2[n])
flag2=1;
}
if(flag2==0)
cout<<"Password correct ."<<endl;
else
cout<<"Invalid Password ."<<endl;
}
if (flag1==0 && flag2==0)
cout<<"WELCOME TO MY CALCULATOR.";
getch();
}
