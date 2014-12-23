#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int count=1;
    while(count<=t){
        int sum=0;
        int N;
        int x[1001];
        scanf("%d",&N);
        for(int i=0;i<N;i++)
            scanf("%d",x+i);
        int y[1001];
        for(int i=0;i<N;i++){
            scanf("%d",y+i);
            //sum=sum+x[i]*y;
        }
        sort(x,x+N);
        sort(y,y+N);
        for(int i=0;i<N;i++)
            sum+=x[i]*y[i];
        cout<<sum<<endl;
        count++;
    }

    return 0;
    }
