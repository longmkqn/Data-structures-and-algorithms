#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int v,e,s,t;
vector<int>adj[1001];
int parent[1001];
bool visited[1001];

void input(){
    cin >> v >> e >> s >> t;
    for(int i=0;i<e;i++){
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
    if(!visited[t])
        cout << "Khong co duong di ";
    else{
        vector<int> path;
        while(t !=s){
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
    int z;
    cin >> z;
    while(z--){
        input();
        Path(s,t);
    }
    return 0;
}