#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int v,e;
vector<int> adj[1001];
bool visited[1001];

void input(){
    cin >> v >> e;
    for(int i=0;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u])
        if(!visited[v])
            DFS(v);
}

void connectCompoment(){
    int ans = 0;
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            ++ans;
            DFS(i);
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        input();
        connectCompoment();
    }
    return 0;
}