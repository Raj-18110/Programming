#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isugly(int n,int i)
{

if(n%3==0)
return 1;
if(n%5==0)
return 1;
if(n<3)
return 0;
if(n>3 && n<5)
return 0;

n=n-i;

return max(isugly(n,3),isugly(n,5));





}


int main()
{

int n,i;

cin>>n;


i=max(isugly(n,3),isugly(n,5));

if(i==1)
cout<<"Enter number"<<n<<"is ugly"<<endl;




return 0;


}
