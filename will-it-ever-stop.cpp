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
    unsigned long long n;
    cin>>n;
    string res="TAK";
    while(n>1){
        if(n%2){
            res="NIE";
            break;
        }
        n=n/2;

    }
    cout<<res<<endl;
    return 0;
    }
