#include<iostream>
#include<cstring>
#include<queue>
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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        input();
        BFS(u);
    }
    return 0;
}