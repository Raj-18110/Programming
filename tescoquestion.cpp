#include<stdio.h>
#include<stack>
#include<iostream>
#include<math.h>
using namespace std;


int formula(long c,long c1)
{


long cal;
cal=-c+sqrt(c*c+4*2*c1);
cal=cal/2;


if(cal*cal+(c*cal)-2*c1==0)
  return 0;

else
 return -1;



}


int main()
{

long num,n;
cin>>num;

n=(num/2)+2;


long i,count=0;
int res;

for(i=1;i<=n;i++)
{

res=formula((2*i)-1,num);

if(res==0)
count++;
}
cout<<count;
return 0;
}
