#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cmath>
using namespace std;
/*int isPrime(int x){
    if(x<=1)
        return 0;
    if(x==2)
        return 1;
    if(n%2==0)
        return 0;
    int rootx=sqrt(x);
    for(int i=3;i<rootx;i+=2)
        if(n%i==0)
            return 0;
    return 1;
}*/
int main(){
    vector<int>nprime(32000,1);
    nprime[0]=0;
    nprime[1]=0;
    vector<int>optimus;
    int root=sqrt(32000);
    for(int i=2;i<=root;i++)
        if(nprime[i])
            for(int k=i*i;k<=32000;k+=i)
                nprime[k]=0;
    int count=0;
    for(int i=2;i<=32000;i++)
        if(nprime[i]==1){
            //cout<<i<<" ";
            optimus.push_back(i);
            count++;
        }
    //cout<<optimus.size()<<endl;;
    //cout<<count<<endl;
    int t,m,n,d;
    cin>>t;
    //cout<<optimus[count-1]<<endl;
    while(t--){
        cin>>m>>n;
        d=n-m;
        vector<int>num(d+1,1);
        int x,dvnd,sprime;
        root=sqrt(n);
        if(m==1)
            num[0]=0;
        for(int i=0;optimus[i]<=root;i++){
            dvnd=m/optimus[i];

            //cout<<m<<" "<<optimus[i]<<" "<<dvnd<<endl;
            sprime=optimus[i]*optimus[i];
            if(sprime<m )
                if(m%optimus[i]==0)
                    sprime=dvnd*optimus[i];
                 else
                    sprime=(dvnd+1)*optimus[i];
            for(int k=sprime;k<=n;k+=optimus[i])
                num[k-m]=0;
            
        }
        for(int i=0;i<d+1;i++)
            if(num[i]==1)
                cout<<m+i<<endl;
        cout<<endl;
    }
       

    return 0;
    }
