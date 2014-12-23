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
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int dp[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && 1+dp[j]>dp[i])
                dp[i]=1+dp[j];
        }
     //   cout<<a[i]<<endl;
    }
    int max;
    max=*max_element(dp,dp+n);
    printf("%d\n",max);
    
    return 0;
    }
