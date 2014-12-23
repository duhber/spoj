#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<string>
#include<cstdio>
using namespace std;
void subtract(int A[], int B[],int lena,int lenb, int result[]){
    int newB[lena];
    for(int i=0;i<lena-lenb;i++)
        newB[i]=0;
    for(int i=lena-lenb;i<lena;i++)
        newB[i]=B[i-lena+lenb];
    int temp;
    for(int i=lena-1;i>=0;i--){
        if(A[i]<newB[i]){
            temp=10+A[i];
            A[i-1]=A[i-1]-1;
        }
        else
            temp=A[i];
        result[i]=temp-newB[i];
       
        //cout<<result[i];
    }
    /*for(int i=0;i<lena;i++)
        cout<<A[i];
        cout<<endl;
    for(int i=0;i<lena;i++)
        cout<<newB[i];
        cout<<endl;
    for(int i=0;i<lena;i++)
        cout<<result[i];
        cout<<endl;*/


}
int main(){
    int t;
    t=10;
    while(t--){
        string sumc,diffc;
        int sum[101],diff[101],sum2[101];
        int klaudia[101],natalia[101];
        cin>>sumc>>diffc;
        int len1,len2;
        len1=sumc.length();
        len2=diffc.length();
        //cout<<len1<<" "<<len2<<endl;
        for(int i=0;i<len1;i++){
            sum[i]=(int)(sumc[i]-'0');
            sum2[i]=sum[i];
            }
        for(int i=0;i<len2;i++)
            diff[i]=(int)(diffc[i]-'0');
        int result[len1];
        subtract(sum,diff,len1,len2,result);
        //divide by 2;
        int r,temp;
        for(int i=0;i<len1;i++){
            natalia[i]=result[i]/2;
            r=result[i]%2;
            if(r!=0)
                result[i+1]=10+result[i+1];

        }
        
        subtract(sum2,natalia,len1,len1,klaudia);
        int i=0;
        while(klaudia[i]==0)
            i++;
        for(;i<len1;i++)
            cout<<klaudia[i];

        cout<<endl;
	int j=0;
        while(natalia[j]==0)
            j++;
        for(;j<len1;j++)
            cout<<natalia[j];
        cout<<endl;
        //break;
    }
    return 0;
    }
