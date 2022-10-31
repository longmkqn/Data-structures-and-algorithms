#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<vector>
using namespace std;

int v,e,s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void input(){
    cin >> v>> e >> s >> t;
    for(int i=0 ;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
}

void BFS(int u){
    queue <int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] =true;
                parent[x] = v;
            }
        }
    }
}

void Path(int s, int t){
    BFS(s);
    if(!visited[t])
        cout << "khong co duong di";
    else{
        vector<int> path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
}

int main(){
    input();
    Path(s,t);
    return 0;
}