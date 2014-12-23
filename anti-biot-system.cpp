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
    int t;
    scanf("%d\n",&t);
    while(t--){
        string exp;
        //cin>>space;
       // cout<<space<<endl;
        while(getline(cin,exp) && exp.length()<2);

        int len=exp.length();
        int num[]={0,0,0};
        int i=0,k=0;
        int er=-1;
        //cout<<exp<<endl;
  
        while(i<len){
            if(exp[i]==' '){
                i=i+2;
                k=k+1;
                //cout<<"true"<<endl;
            }
            else if(exp[i]>=91){
                er=k;
            }
            else
                num[k]=num[k]*10+int(exp[i]-'0');
            i=i+1;

        }
        if(er==0)
            num[0]=num[2]-num[1];
        else if(er==1)
            num[1]=num[2]-num[0];
        else if(er==2)
            num[2]=num[0]+num[1];
        cout<<num[0]<<" + "<<num[1]<<" = "<<num[2]<<endl;

    }

    return 0;
    }
