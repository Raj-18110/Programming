#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;

int a[n];
int i;
for(i=0;i<n;i++)
{
cin>>a[i];
}

int flag=0;
int j;
int min;
int index;
for(i=0;i<n-1;i++)
{
min=i;

for(j=i+1;j<n;j++)
{
//min=min(min,a[j]);
if(a[min]>a[j])

{

min=j;
//index=j;
//flag=1;
}
}
//if(flag=1){
swap(a[i],a[min]);
//flag=0;
//}
}

for(i=0;i<n;i++)
cout<<a[i];











}
