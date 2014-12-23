#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>

using namespace std;

int main(){
    int K,L,m;
    cin>>K>>L>>m;
    int s[1000001];
    s[0]=0;
    s[1]=1;
    //s[K]=1;
    //s[L]=1;
    int i1,ik,il;
    for(int i=2;i<=1000000;i++){
        i1=i-1;
        ik=i-K;
        il=i-L;
        if(il<0 && ik<0)
            if(s[i1])
                s[i]=0;
            else
                s[i]=1;
        else if(il<0)
            if(s[i1] && s[ik])
                s[i]=0;
            else
                s[i]=1;
        else if(ik<0)
            if(s[i1] && s[il])
                s[i]=0;
            else
                s[i]=1;
        else
            if(s[i1] && s[ik] && s[il])
                s[i]=0;
            else
                s[i]=1;

    }
    int N;
    while(m--){
        cin>>N;
        if(s[N])
            cout<<"A";
        else
            cout<<"B";
    }
    cout<<endl;
    return 0;
    }
