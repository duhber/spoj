#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<math.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int num[10001];
    num[1]=1;
    for(int i=2;i<=N;i++){
        num[i]=num[i-1];
        int root=sqrt(i);
        for(int j=1;j<=root;j++)
            if(i%j==0)
                num[i]=num[i]+1;
    }
    cout<<num[N]<<endl;
    return 0;
    }
