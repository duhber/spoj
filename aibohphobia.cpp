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
    int t;
    cin>>t;
    while(t--){
        char str[6101];    
        scanf("%s",str);
        string rstr(str);
        reverse(rstr.begin(),rstr.end());
        int n;
        n=rstr.length();
        int dp[2][6101];
        for(int i=0;i<=n;i++)
            dp[0][i]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(j==0)
                    dp[1][j]=0;

                else if(str[i-1]==rstr[j-1]){
                    dp[1][j]=1+dp[0][j-1];
                    //cout<<str[i-1]<<" "<<rstr[j-1]<<" ";
                }
                else
                    dp[1][j]=max(dp[0][j],dp[1][j-1]);
               // cout<<dp[1][j]<<" ";
            }
            //cout<<i;
            for(int j=0;j<=n;j++)
                dp[0][j]=dp[1][j];
            //cout<<endl;
        }
        printf("%d\n",n-dp[1][n]);
        
    }

    return 0;
    }
