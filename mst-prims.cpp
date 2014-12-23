#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstring>
#include<cstdio>
#include<unordered_map>
#include<string>
#include<limits>
#include<utility>
using namespace std;

int main(){
    int inf=1000001;
    int n,m;
    int v1,v2,cost;
    cin>>n>>m;
    vector< pair<int,int> > temp;
    vector< vector < pair<int,int> > > graph(n+1,temp);//(n,(vector < pair <int,int> >));//adjacency list
    for(int i=0;i<m;i++){
        cin>>v1>>v2>>cost;
        graph[v1].push_back(make_pair(v2,cost));
       // cout<<cost<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<graph[i].size();j++)
            cout<<graph[i][j].second<<" ";
        cout<<endl;
    }

    vector<int> min_e(n+1,inf), sel_e(n+1,-1);
    min_e[1]=0;
    set < pair<int,int> >q;
    q.insert(make_pair(1,0));
    for(int i=1;i<=n;i++){
        if(q.empty())
            break;
        v1=q.begin()->second;
        q.erase(q.begin());
        for(int j=0;j<graph[v1].size();j++){
            v2=graph[v1][j].first;
            cost=graph[v1][j].second;
            if(cost<min_e[v2]){
                q.erase(make_pair(min_e[v2],v2));
                min_e[v2]=cost;
                sel_e[v2]=v1;
                q.insert(make_pair(min_e[v2],v2));
            }
        }
    }
    long long sum=accumulate(min_e.begin()+1,min_e.end(),(long long)0);
    cout<<sum<<endl;
    
    return 0;
    }
