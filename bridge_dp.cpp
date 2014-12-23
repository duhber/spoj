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
#include<utility>
using namespace std;

bool comparator(const pair<int,int> & p1, const pair<int,int> & p2){
    return p1.first<p2.first;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<int>side1;
        vector< pair<int,int> > side2;
        int temp;
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            side1.push_back(temp);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            side2.push_back(make_pair(temp,side1[i]));
        }
        sort(side2.begin(),side2.end());
        int x[n];
        for(int i=0;i<n;i++)
            x[i]=side2[i].second;
        /*for(int i=0;i<n;i++)
            cout<<x[i]<<" ";
        cout<<endl;*/
        int dp[n];
        dp[0]=1;
        for(int i=1;i<n;i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(x[i]>x[j] && 1+dp[j]>dp[i])
                    dp[i]=1+dp[j];
            }
        }
        
        int max;
        max=*max_element(dp,dp+n);
        //printf("%d\n",s.size());
        printf("%d\n",max);
    
        /*for(int i=0;i<n;i++)
            cout<<s[i]<<" ";
            cout<<endl;*/
    }
    return 0;
    }
