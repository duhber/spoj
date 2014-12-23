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
    float c;
    while(scanf("%f",&c) && c!=0.00){
       // printf("%.2f\n",c);
        float term=0;
        int n=1;
        while(1){
            term+=1/float(n+1);
            if(term>c)
                break;
            n++;
        }

        printf("%d card(s)\n",n);
        
    }

    return 0;
    }
