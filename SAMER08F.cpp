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
    int dp[101];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=100;i++){
        dp[i]=dp[i-1]+i*i;
    }
    int n;
    while(scanf("%d",&n) && n!=0){
        printf("%d\n",dp[n]);
    }

    return 0;
    }
