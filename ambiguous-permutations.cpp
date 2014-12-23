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
#include<stack>
#include<utility>

using namespace std;

int main(){
    int n;
    while(scanf("%d",&n) && n!=0){
        int p[n+1],ip[n+1];
        string res="ambiguous";
        for(int i=1;i<=n;i++){
            scanf("%d",&p[i]);
            ip[p[i]]=i;
        }
        for(int i=1;i<=n;i++){
            if(p[i]!=ip[i]){
                res="not ambiguous";
                break;
            }
        }
        cout<<res<<endl;

    }

    return 0;
    }
