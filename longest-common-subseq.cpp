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
    string si,sj;
    cin>>si>>sj;
    int leni=si.length();
    int lenj=sj.length();      
    int dp[leni+1][lenj+1];
    for(int i=0;i<=leni;i++){
        for(int j=0;j<=lenj;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(si[i-1]==sj[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

        }

    }
    cout<<dp[leni][lenj]<<endl;
    return 0;
    }
