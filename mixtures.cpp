#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstring>
#include<cstdio>
#include<limits>
using namespace std;

int main(){
    int n;
    
    while(scanf("%d",&n)!=-1){
        int mixture[n];
        long long unsigned inf=numeric_limits<int>::max();
        //cout<<inf<<endl;
        int color[n][n];
        long long unsigned dp[n][n];
        scanf("%d",&mixture[0]);
        color[0][0]=mixture[0];
        for(int i=1;i<n;i++){
            scanf("%d",&mixture[i]);
            color[i-1][i]=(mixture[i-1]+mixture[i])%100;
            color[i][i]=mixture[i];
        }
        //int color[n][n],dp[n][n];
        for(int i=0;i<n;i++)
            dp[i][i]=0;
        for(int L=2;L<=n;L++){
            for(int i=0;i<n-L+1;i++){
                int j=i+L-1;
                dp[i][j]=inf;
                long long unsigned q;
                for(int k=i;k<=j-1;k++){
                    q=dp[i][k]+dp[k+1][j]+color[i][k]*color[k+1][j];
                    if(q<dp[i][j]){
                        dp[i][j]=q;
                        color[i][j]=(color[i][k]+color[k+1][j])%100;
                    }
                }
            }
        }
    printf("%llu \n",dp[0][n-1]);
    
    }

    return 0;
    }
