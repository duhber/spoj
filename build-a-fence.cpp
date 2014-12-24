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
#define pi 3.1415926 
using namespace std;

int main(){
    int L;
    while(scanf("%d",&L)&& L!=0){
        float area;
        float r;
        r=L/pi;
        area=0.5*pi*r*r;
        printf("%.2f\n",area);
    }
    return 0;
    }
