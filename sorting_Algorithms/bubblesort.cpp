#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

int i,a[n],j;

for(i=0;i<n;i++)
cin>>a[i];


for(i=0;i<n;i++)
{

for(j=0;j<n-i-1;j++)
{

if(a[j]>a[j+1])
  swap(a[j],a[j+1]);





}





}


for(i=0;i<n;i++)
cout<<a[i];








return 0;
}
