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
    while(scanf("%d",&n) && n!=-1){
        int sum=0;
        int candy[n];
        for(int i=0;i<n;i++){
            scanf("%d",&candy[i]);
            sum+=candy[i];
        }
        int count=0;
        int num;
        if(sum%n)
            count=-1;
        else{
             num=sum/n;
             for(int i=0;i<n;i++)
                 if(candy[i]>num)
                     count+=candy[i]-num;
        }
        printf("%d\n",count);
    }

    return 0;
    }
