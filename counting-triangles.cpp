#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;
    int dp[1000001];
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<1000001;i++){
        dp[i]=dp[i-1]+2*i-1;
    }
    while(t--){
    }

    return 0;
    }
