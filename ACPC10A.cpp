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
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)&& ( a || b || c)){
        if(b-a==c-b)
            printf("AP %d\n",b-a+c);
        else
            printf("GP %d\n",(b/a)*c);
    }

    return 0;
    }
