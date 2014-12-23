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
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string expr;
        cin>>expr;
        int len=expr.length();
        stack<char>opstk;
        string postfix;
        char op;
        for(int i=0;i<len;i++){
            if(expr[i]==')'){
                op=opstk.top();
                opstk.pop();
                postfix+=op;

            }
            else if(expr[i]>='a' && expr[i]<='z'){
                postfix+=expr[i];
            }
            else if(expr[i]=='(')
                continue;
            else
                opstk.push(expr[i]);

        }
        cout<<postfix<<endl;
    }

    return 0;
    }
