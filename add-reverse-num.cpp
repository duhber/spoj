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

int rev(int x){
    int y=0;
    while(x){
        y=y*10+x%10;
        x=x/10;
    }
    return y;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<rev(rev(a)+rev(b))<<endl;

    }

    return 0;
    }
