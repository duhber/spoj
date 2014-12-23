#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>

using namespace std;
void multiply(int a[], int *m,int num){
    int temp=0,x;
    for(int i=0;i<*m;i++){
        x=a[i]*num+temp;
        a[i]=x%10;
        temp=x/10;
    }
    while(temp!=0){
        a[*m]=temp%10;
        temp=temp/10;
        *m=*m+1;
    }

}
int main(){
    int A[200000];
    int t;
    cin>>t;
    while(t--){
        int n,m=0;
        cin>>n;
        int temp=n;
        while(temp!=0){
            A[m]=temp%10;
            temp=temp/10;
            m=m+1;
        }
        while(--n)
            multiply(A,&m,n);
        for(int i=m-1;i>=0;i--)
            cout<<A[i];
        cout<<endl;
    }
    return 0;
    }
