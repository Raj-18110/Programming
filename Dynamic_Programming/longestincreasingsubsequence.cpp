#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        
        int n;
        cin>>n;
        if(n!=0){
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        int flag=0;
        
        int dp[n];
        memset(dp,0,sizeof(dp));
        
        int x,y;
        
        for(x=1;x<n;x++)
        {
            
            for(y=0;y<x;y++)
            {
                
                if(a[x]>a[y])
                {
                    flag=1;
                    dp[x]=max(dp[y]+1,dp[x]);
                  //  cout<<dp[x]<<" ";
                    
                    
                }
                
        }
            
        }
     //   cout<<endl;
    int max1=0;
        
       
        for(x=0;x<n;x++)
        {
            if(max1<dp[x])
            max1=dp[x];
        }
         cout<<max1+1<<endl;
        }
        
        
        else
          cout<<0<<endl;
      
       
        
        
        
        
        
        
        
    }
	//code
	return 0;
}
