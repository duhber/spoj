#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<list>
#include<set>
#include<cstring>
#include<cstdio>
#include<functional>
//#include<unordered_map>
#include<string>
#include<limits>
#include<queue>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii>vii;
typedef vector<vii>vvii;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;//n-no. of vertices , m-no. of edges
        //input graph 
        vector < vector < pair <int, int > > > graph(n+1);
        int v1,v2,cost;
        int s,d;//s-source, d-destination
        for(int i=1;i<=m;i++){
            cin>>v1>>v2>>cost;
            graph[v1].push_back(make_pair(v2,cost));
        }
        
        cin>>s>>d;

        /*for(int i=1;i<=n;i++){
            cout<<i<<":"<<endl;
            for(int j=0;j<graph[i].size();j++)
                cout<<graph[i][j].first<<"-->"<<graph[i][j].second<<endl;
            cout<<endl;    
        }*/
        priority_queue<ii,vector<ii>,greater<ii> > q;// q.first is cost, q.second is vertex
        //priority queue with reverse comparison operator
        int inf=numeric_limits<int>::max();
        vector<int>dist(n+1,inf);
        dist[s]=0;
        q.push(ii(0,s));
        //iterate wile queue is not empty
        while(!q.empty()){
            //fetch nearest element
            ii top=q.top();
            q.pop();
            v1=top.second;
            cost=top.first;
            if(cost<=dist[v1]){
                vii::iterator it;
                for(it=graph[v1].begin();it!=graph[v1].end();++it){
                    v2=it->first;
                    cost=it->second;
                    if(dist[v2]>dist[v1]+cost){
                        dist[v2]=dist[v1]+cost;
                        q.push(ii(dist[v2],v2));
                    }
                }
            }
        }
        if(dist[d]!=inf)
            cout<<dist[d]<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
    }
