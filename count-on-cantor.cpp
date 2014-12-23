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
    while(t--){
        int k;
        scanf("%d",&k);
        int n=1,sum=1;
        while(k>sum){
            n++;
            sum+=n;
        }
        sum=sum-n;
        int dif=k-sum-1;
        int dnm,num;
        
        dnm=1+dif;
        num=n-dif;
        
        if(n%2){
            int temp;
            temp=dnm;
            dnm=num;
            num=temp;
        }
        printf("TERM %d IS %d/%d\n",k,dnm,num);
       



    }

    return 0;
    }
