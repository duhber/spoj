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
typedef pair<long long  ,long long>ii;
typedef vector<ii>vii;
typedef vector<vii>vvii;
int main(){
    
    long long t;
    cin>>t;
    while(t--){
        long long  n; scanf("%lld",&n);//num of vertices
        map<string,long long>city;
        long long k;//num of neighbouring cities
        long long v1,v2;
        long long cost;
        char name[10];
        vector < vector < pair <long long, long long> > > graph(n+1);
        for(v1=1;v1<=n;v1++){
            scanf("%s",name);
            city[name]=v1;
            scanf("%lld",&k);
            for(long long i=1;i<=k;i++){
                scanf("%lld %lld",&v2,&cost);
                graph[v1].push_back(make_pair(v2,cost));
            }
        }
        map<long long,long long> srcmap;
        vector< vector <long long> > res;
        long long r,s,d;
        //string sname,dname;
        char sname[10],dname[10];
        scanf("%lld",&r);
        long long i=0;
        map<long long,long long>::iterator map_it;
        while(r--){
            scanf("%s %s",sname,dname);
            s=city[sname];
            d=city[dname];
            /*map_it=srcmap.find(s);
            if(map_it!=srcmap.end()){
                printf("%lld \n",res[map_it->second -1][d]);
            }*/
            //else{
                //i=i+1;    
                //srcmap[s]=i;
                priority_queue<ii,vector<ii>,greater<ii> > q;
                long long inf=numeric_limits<long long>::max();
                vector<long long>dist(n+1,inf);
                dist[s]=0;
                q.push(ii(0,s));
                while(!q.empty()){
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
                printf("%lld \n",dist[d]);
                //res.push_back(dist);
            //}
                
        }
    }
    return 0;
    }
