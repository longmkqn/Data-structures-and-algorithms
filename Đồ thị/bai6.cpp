#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int v,e,u;
vector<int> adj[1001];
bool visited[1001];

void input(){
    cin >> v >> e >> u;
    for(int i=0;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}

void DFS(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v])
            DFS(v);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        input();
        DFS(u);
    }
    return 0;
}