
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;


void merge(int a[],int low,int high,int mid)
{

int k;
int i,j;
int n1=mid-low+1;
int n2=high-mid;
int left[n1],right[n2];

for(i=0;i<n1;i++)
left[i]=a[low+i];

for(i=0;i<n2;i++)
right[i]=a[mid+1+j];


i=0,j=0;k=low;

while(i<n1 && j<n2)
{

if(left[i]>right[j])
{

a[k]=right[j];
k++;
j++;

}
else
{

a[k]=left[i];
k++;
i++;

}
}


while(i<n1){
a[k]=left[i];
i++;
k++;
}


while(j<n2){
a[k]=right[j];
j++;
k++;
}






}



void mergesort(int a[],int low,int high)
{
if(low<high){
int mid=(low+high)/2;

mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,high,mid);

}
}





int main()
{

int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];

mergesort(a,0,n-1);

for(i=0;i<n;i++)
cout<<a[i];
return 0;

}
