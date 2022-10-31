#include<iostream>
#include<vector>
using namespace std;

int v,e;
vector<int> adj[1001];
int color[1001];

void input(){
    cin >> v >> e;
    for(int i = 0;i<e;i++){
        int x,y;
        cin >> x >>y;
        adj[x].push_back(y);
    }
}

bool DFS(int u){
    color[u] = 1;
    for(int v : adj[u]){
        if(color[v] == 0){
            //par[v] = u;
            if(DFS(v)) return true;
        }
        else if(color[v] == 1) return true;
    }
    color[u] = 2;
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        input();
        if(DFS(1)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}