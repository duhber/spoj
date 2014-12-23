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
    //unsigned  long cube;
    /*unsigned long count=0,prev=0;
    for(unsigned long i=192;i<=5000000;i+=10){
        cube=i*i*i;
        if(cube%1000==888){
            cout<<i<<" "<<cube<<" "<<i-prev<<endl;
            count++;
            prev=i;
        }

    }*/
    //cout<<count<<endl;
    while(t--){
        unsigned long long res,k;
        scanf("%llu",&k);
        res=192+250*(k-1);
        printf("%llu\n",res);

    }

    return 0;
    }
