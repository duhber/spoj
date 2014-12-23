#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>

using namespace std;

int main(){
    while(1){
        string str;
        cin>>str;
        if(str[0]=='0')
            break;
        int len;
        len=str.length();
        int istr[5001],dp[5001];
        for(int i=0;i<len;i++)
            istr[i+1]=(int)(str[i]-'0');
        dp[0]=1;
        dp[1]=1;
        int q=0;
        for(int i=2;i<=len;i++){
            if(istr[i]==0 && istr[i-1]>2){
                q=1;
                break;
            }
            else if(istr[i-1]<3 && istr[i]==0){
                dp[i-1]=dp[i-2];
                dp[i]=dp[i-2];
            }

            else if((istr[i-1]==2 && istr[i]<7)||istr[i-1]==1)
                dp[i]=dp[i-2]+dp[i-1];
            else
                dp[i]=dp[i-1];


            
        }
        if(q)
            cout<<0<<endl;
        else
            cout<<dp[len]<<endl;

    }

    return 0;
    }
