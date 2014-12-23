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

        char strA[3000];    
        scanf("%s",strA);
        char strB[3000];
        scanf("%s",strB);
        int n1,n2;
        n1=strlen(strA);
        n2=strlen(strB);
        int dp[2][3001];
        for(int i=0;i<=n2;i++)
            dp[0][i]=i;
        
        for(int i=1;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                int indcatr=1;
                if(min(i,j)==0)
                    dp[1][j]=max(i,j);

                else{
                     
                    if(strA[i-1]==strB[j-1])
                        indcatr=0;
                    int temp[]={dp[0][j]+1,dp[1][j-1]+1,dp[0][j-1]+indcatr};
                    dp[1][j]=*min_element(temp,temp+3);
               }
            }
            //cout<<i;
            for(int j=0;j<=n2;j++)
                dp[0][j]=dp[1][j];
            //cout<<endl;
        }
        printf("%d\n",dp[1][n2]);
        
    }

    return 0;
    }
