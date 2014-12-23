#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<stdio.h>
#define num 10000//0000000
using namespace std;

int main(){
    int  N;
    while(scanf("%d",&N)!=EOF){
        vector<int> dollar;
        dollar.push_back(0);
        int temp;
        for(int i=1;i<=N;i++){
            temp=dollar[i/2]+dollar[i/3]+dollar[i/4];
            dollar.push_back(i>temp?i:temp);
        }
        cout<<dollar[N]<<endl;
    }
    return 0;
}
