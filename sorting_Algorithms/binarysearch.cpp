#include<bits/stdc++.h>
using namespace std;


int binarysearch(int *a,int low,int high,int key)
{

int mid;
mid=(low+high)/2;

if(high<low)
  return -1;
if(a[mid]==key)
{

return mid;
}
else if(a[mid]>key)
{
high=mid-1;
return binarysearch(a,low,high,key);
}
else if(a[mid]<key)
{

low=mid+1;

return binarysearch(a,low,high,key);


}









}





int main()
{

int n,i;
cin>>n;

int *p=new int(n);

for(i=0;i<n;i++)
cin>>p[i];

int key;
cin>>key;

int res=binarysearch(p,0,n-1,key);

if(res==-1)
cout<<"Element not found";

else
cout<<res;







return 0;
}
