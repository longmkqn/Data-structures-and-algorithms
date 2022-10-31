#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

int v,e;
vector<int> adj[1001];
int par[1001];
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

bool BFS(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                par[x] = v;
            }
            else if(par[v] != x) return true;  
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        input();
        if(BFS(1)) cout << "YES]\n";
        else cout << "NO\n";
    }
    return 0;
}