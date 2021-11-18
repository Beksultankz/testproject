#include<iostream>
#include<stdio.h>
#include <string.h>
#include<string>
using namespace std;
int main()
{int i,l=0,j,k,m=0;
string t="",jol="";
string p="quot;programming in C is a good choice to start.";
int max=0;
for(j=0;j<p.length();j++)
{k=0;
if (p[j]=''||  p[j]=".") k=1;
if (k==0) {t[m]=p[j]; m++; }
if(k==1 &&; m!=0){
cout<<m<<endl;
if(m>max)
{max=m;
for(int x=0; x<max; x++)
jol[x]=t[x];}

m=0; } }
cout<<"max"<<endl;
for(int x=0; x<max; x++) 
cout<<jol[x];}
