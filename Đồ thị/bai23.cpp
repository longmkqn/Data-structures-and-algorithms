#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int v,e;
vector<int> adj[1001];
int par[1001];
bool visited[1001];

void input(){
    cin >> v >> e;
    for(int i =0;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}

bool DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            par[x] = u;
            if(DFS(x)) return true;
    }
        else if(x != par[u]) return true;
        }
    return false;
}

int main(){
    int  t;
    cin >> t;
    while(t--){
        input();
        for(int i= 1;i<=v;i++){
            if(!visited[i]){
                if(DFS(i)){
                    cout << "YES" << endl;
                    return 1;
                }
            }
        }
        cout << " NO" <<endl;
    }
    return 0;
}