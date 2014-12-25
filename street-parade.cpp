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
    while(scanf("%d",&n) && n!=0){
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        stack<int> s;
        int i=0;
        while(a[i]!=1){
            s.push(a[i]);
            i++;
        }
        int prev=a[i];
        i++;
        for(;i<n;i++){
            if(a[i]!=prev+1){
                while(!s.empty() && s.top()==prev+1){
                    prev=s.top();
                    s.pop();
                }
                s.push(a[i]);                
            }
            else
                prev=a[i];
        }
        string res="yes";
        if(!s.empty()){
            prev=s.top();
            s.pop();
        }
        while(!s.empty()){
            if(prev>s.top()){
                res="no";
                break;
            }
            prev=s.top();
            s.pop();
        }
        cout<<res<<endl;

    }
    return 0;
    }
