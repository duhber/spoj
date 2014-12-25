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
    scanf("%d\n\n",&t);
    while(t--){
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        int g[n1],mg[n2];
        for(int i=0;i<n1;i++)
            scanf("%d",&g[i]);
        for(int i=0;i<n2;i++)
            scanf("%d",&mg[i]);
        int maxg,maxmg;
        maxg=*max_element(g,g+n1);
        maxmg=*max_element(mg,mg+n2);
        if(maxg>=maxmg)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
        scanf("\n\n");
    }
    
    return 0;
    }
