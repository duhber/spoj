#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    while(1){
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
            break;
        else{
            int yeye[n][m];
            int blog[n][m];
            int dp[n][m];
            int sumrow[n],sumcol[m];
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    scanf("%d",&yeye[i][j]);
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    scanf("%d",&blog[i][j]);
            memset(sumrow,0,sizeof(sumrow));
            memset(sumcol,0,sizeof(sumcol));
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++){
                    int x,y;
                    sumrow[i]+=yeye[i][j];
                    sumcol[j]+=blog[i][j];
                    if(i>0)
                        x=dp[i-1][j];
                    else
                        x=0;
                    if(j>0)
                        y=dp[i][j-1];
                    else
                        y=0;
                    dp[i][j]=max(x+sumrow[i],y+sumcol[j]);
 
                        
                }

            cout<<dp[n-1][m-1]<<endl;
        }
    }

    return 0;
    }
