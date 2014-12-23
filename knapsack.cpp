#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstring>
#include<cstdio>
//#include<unordered_map>
#include<string>
#include<limits>
#include<functional>
#include<queue>
using namespace std;

int main(){
    int S,n;
    scanf("%d %d",&S,&n);
    int dp[n+1][S+1];
    int s[n],v[n];
    for(int i=0;i<n;i++)      
        scanf("%d %d",&s[i],&v[i]);
    for(int i=0;i<=n;i++)
        for(int j=0;j<=S;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(j-s[i-1]<0)
                dp[i][j]=dp[i-1][j];
            else 
                dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-s[i-1]]);

        }
        printf("%d\n",dp[n][S]);

    return 0;
    }
