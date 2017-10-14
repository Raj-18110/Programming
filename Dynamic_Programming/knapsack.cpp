#include<iostream>
#include<cmath>
#include <vector>
using  namespace std;

//vector <int,int> k;

void knapsack(int weight[],int cost[],int n,int w)
{

int k[n+1][w+1];

int i,j;

for(i=0;i<n+1;i++)
{
for(j=0;j<w+1;j++)
{

if(i==0||j==0)
   k[i][j]=0;
else if (weight[i-1]>j)
       k[i][j]=k[i-1][j];
else
    k[i][j]=max(cost[i-1]+k[i-1][j-weight[i-1]],k[i-1][j]);







}

}
cout<<k[n][w];
}








int main()
{

int n;
cin>>n;
int weight[n];
int cost[n];
for(int i=0;i<n;i++)
{
cin>>weight[i];
cin>>cost[i];
}



int max_weight;
cin>>max_weight;


knapsack(weight,cost,n,max_weight);







}
