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
    int n;
    scanf("%d",&n);
    while(n--){
        int x,y;
        scanf("%d %d",&x,&y);
        int num;
        if(x==y || x==y+2){
            if(x%2)
                num=x+y-1;
            else
                num=x+y;
            printf("%d\n",num);
        }
        else
            printf("No Number\n");

    }

    return 0;
    }
