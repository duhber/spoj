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
    char str[n];
    scanf("%s",str);
    string rstr(str);
    reverse(rstr.begin(),rstr.end());
   // strcpy(rstr,temp);  
    cout<<str<<endl;
    cout<<rstr<<endl;
    int dp[n+1];
    dp[0]=0;
    int max=0;
    for(int i=1;i<=n;i++){
        if(str[i-1]==rstr[i-1]){
            dp[i]=1+dp[i-1];
            if(dp[i]>max)
                max=dp[i];
        }
        else
            dp[i]=0;
    cout<<dp[i]<<endl;
    }
    cout<<max<<endl;
    return 0;
    }
