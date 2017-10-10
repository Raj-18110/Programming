#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

int a[n],j,i;

for(i=0;i<n;i++)
cin>>a[i];
int key;

for(i=1;i<n;i++)
{
key=a[i];
j=i-1;

while(j>=0 && a[j]>key)

{

swap(a[j],a[j+1]);
j=j-1;



}
}

for(i=0;i<n;i++)
cout<<a[i];










}
