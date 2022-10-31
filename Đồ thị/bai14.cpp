#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

int n,m,s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void input(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
}

void DFS(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
            parent[v] = u;
        }
    }
}

void Path(int s, int t){
    DFS(s);
    if(!visited[t]) cout << "NO" << endl;
    else cout << "YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int i;
    cin >> i;
    while(i--){
        input();
        int q;
        cin >> q;
        while(q--){
            cin >> s >> t;
            Path(s,t);
            //cout << "\n";
        }
    }
    return 0;
}