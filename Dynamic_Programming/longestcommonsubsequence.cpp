#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        
        int n1,n2;
        cin>>n1>>n2;
        
        string s1;
        string s2;
        cin>>s1>>s2;
        
        int i,j;
        int dp[n1+1][n2+1];
        
        for(i=0;i<=n1;i++)
        {
            for(j=0;j<=n2;j++)
            {
                
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                dp[i][j]=max(1+dp[i-1][j-1],dp[i-1][j]);
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                
                
                
                
                
            }
            
            }
            
            cout<<dp[n1][n2]<<endl;
        
        
        
        
        
        
        
        
    }
    

	return 0;
}
