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
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int factr=5;
        int res=0;
        while(n/factr){
            res+=n/factr;
            factr=factr*5;
        }
        printf("%d\n",res);
    }

    return 0;
    }
