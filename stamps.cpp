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
    int t;
    scanf("%d",&t);
    int k=1;
    while(k<=t){
        int S,n;
        scanf("%d %d",&S,&n);
        int st[n];
        for(int i=0;i<n;i++)
            scanf("%d",&st[i]);
        sort(st,st+n);
        int i=n-1;
        int count=0;
        while(S>0 && i>=0){
            S=S-st[i];
            i--;
            count++;
        }
        printf("Scenario #%d:\n",k);
        if(S<=0)
            printf("%d\n\n",count);
        else
            printf("impossible\n\n");
        k++;
    }

    return 0;
    }
