#include<iostream>
using namespace std;


void sumprint(int arr[],int sum,int n,int add)
{


sum=sum+add;

if(n==0){
cout<<"Sum is: "<<sum<<endl;
return;
}


sumprint(arr,sum,n-1,arr[n-1]);
sumprint(arr,sum,n-1,0);
}





int main()
{



int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];


sumprint(a,0,n,0);





return 0;


}
