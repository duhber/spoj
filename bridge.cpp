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
#include<utility>
using namespace std;

bool comparator(const pair<int,int> & p1, const pair<int,int> & p2){
    return p1.first<p2.first;
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<int>side1;
        vector< pair<int,int> > side2;
        int temp;
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            side1.push_back(temp);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            side2.push_back(make_pair(temp,side1[i]));
        }
        sort(side2.begin(),side2.end());
        int x[n];
        for(int i=0;i<n;i++)
            x[i]=side2[i].second;
        /*for(int i=0;i<n;i++)
            cout<<x[i]<<" ";
        cout<<endl;*/
        vector<int> s;
        vector<int>::iterator it;
        s.push_back(x[0]);
        for(int i=1;i<n;i++)
            if(x[i]>=s.back())
                s.push_back(x[i]);
            else{
                it=upper_bound(s.begin(),s.end(),x[i]);
                int indx=(int)(it-s.begin());
                s[indx]=x[i];
            }
        cout<<s.size()<<endl;
        //printf("%d\n",s.size());

    
        /*for(int i=0;i<n;i++)
            cout<<s[i]<<" ";
            cout<<endl;*/
    }
    return 0;
    }
