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
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector< vector < pair<int,int> > > graph(n+1);
        map<string,int>city;
        int v1,v2,k,cost;
        string name;
        for(v1=1;v1<=n;v1++){
            cin>>name;
            city[name]=v1;
            scanf("%d",&k);
            for(int i=1;i<=k;i++){
                scanf("%d %d",&v2,&cost);
                graph[v1].push_back(make_pair(v2,cost));
            }
        }
        int s,d,r;
        scanf("%d",&r);
        string sname,dname;
        int inf=numeric_limits<int>::max();
        while(r--){
            cin>>sname>>dname;
            s=city[sname];
            d=city[dname];
            vector<int>dist(n+1,inf), p(n+1);
            dist[s]=0;
            priority_queue < pair <int,int> >q;
            q.push(make_pair(0,s));
            while(!q.empty()){
                v1=q.top().second;
                cost=-1*q.top().first;
                q.pop();
                if(v1==d)
                    break;
                if(cost>dist[v1])
                    continue;
                int len;
                for(int j=0;j<graph[v1].size();j++){
                    v2=graph[v1][j].first;
                    len=graph[v1][j].second;
                    if(dist[v2]>dist[v1]+len){
                        dist[v2]=dist[v1]+len;
                        p[v2]=v1;
                        q.push(make_pair(-1*dist[v2],v2));
                    }
                }
            }
            printf("%d\n",dist[d]);
        }


    }

    return 0;
    }
