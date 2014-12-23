#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstdio>
using namespace std;

int main(){
    int t;
    cin>>t;
    int A[100000];
    int dp[100000];
    int cnt[100000];
    while(t--){
        int n;
        //int A[100000];
        cin>>n;
        //int dp[100000];
        cin>>A[0];
        dp[0]=A[0];
        cnt[0]=1;
        for(int i=1;i<n;i++){
            scanf("%d",A+i);
            if(dp[i-1]+A[i] < A[i]){
                dp[i]= A[i];
                cnt[i]=1;
            }
            else if(dp[i-1]+A[i]>A[i]){
                dp[i]=dp[i-1]+A[i];
                cnt[i]=cnt[i-1];
            }
            else{
                dp[i]=dp[i-1]+A[i];
                cnt[i]=cnt[i-1]+1;
            }   


        }
        int max;
        max=*max_element(dp,dp+n);
        long long int count=0;
        for(int i=0;i<n;i++){
           // cout<<dp[i]<<endl;
            if(dp[i]==max)
                count+=cnt[i];
        }
        printf("%d %lld\n",max,count);
    }

    return 0;
    }
