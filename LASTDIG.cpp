#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        long int b;
        scanf("%d %ld",&a,&b);
        int lastd;
        if(a%10==0 && b!=0)
            lastd=0;
        else if(b==0)
            lastd=1;

        else if(a%10==(a*a)%10)
            lastd=a%10;
        else if(a%10==4 || a%10==9){
            if(b%2)
                lastd=a%10;
            else
                lastd=(a*a)%10;
        }
        else{
            if(b%4==1)
                lastd=a%10;
            else if(b%4==2)
                lastd=(a*a)%10;
            else if(b%4==3)
                lastd=(a*a*a)%10;
            else
                lastd=(a*a*a*a)%10;
        }
        printf("%d\n",lastd);
    }

    return 0;
    }
