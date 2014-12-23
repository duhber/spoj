#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<stdio.h>
#define num 10000//0000000
using namespace std;
map<long long unsigned ,long long unsigned> dollar;
long long unsigned fn(int N){
    if(N<12)
        return N;
    else if(dollar.find(N)!=dollar.end())
        return dollar[N];
    else{
        dollar[N]=fn(N/2)+fn(N/3)+fn(N/4);
        return dollar[N];
    }
}
int main(){
    long long unsigned  N;
    while(cin>>N){
    cout<<fn(N)<<endl;       
    }
    return 0;
    }
