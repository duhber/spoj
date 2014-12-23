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
#include<utility>
using namespace std;
vector <int> p(1001);
int dsu_get(int v){
    return(v==p[v])?v:(p[v]=dsu_get(p[v]));
}

int dsu_unite(int a,int b){
    a=dsu_get(a);
    b=dsu_get(b);
    if(rand () & 1)
        swap(a,b);
    if(a!=b)
        p[a]=b;
}
int main(){
    int n,m;
    int v1,v2,cost;
    cin>>n>>m;
    vector< pair < int, pair<int,int> > > graph;
    for(int i=0;i<m;i++){
        cin>>v1>>v2>>cost;
        graph.push_back(make_pair(cost,make_pair(v1,v2)));
    }
    long long tcost=0;
    vector< pair <int,int> > res;
    sort(graph.begin(),graph.end());
    p.resize(n);
    for(int i=1;i<=n;i++)
        p[i]=i;
    for(int i=0;i<m;i++){
            //cout<<graph[i].second.first<<" "<<graph[i].second.second<<endl;
            cost=graph[i].first;
              v1=graph[i].second.first;
              v2=graph[i].second.second;
              if(dsu_get(v1)!=dsu_get(v2)){
                  tcost+=cost;
                  res.push_back(graph[i].second);
                  dsu_unite(v1,v2);
              }
    }
    cout<<tcost<<endl;
    
    return 0;
    }
