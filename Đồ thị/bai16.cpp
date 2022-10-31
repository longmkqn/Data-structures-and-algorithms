#include<iostream>
#include<queue>
#include<cstring>
#include<vector>
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
                visited[x] = true;
            }
        }
    }
}

int connectCompoment(){
    int cnt = 0;
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            ++cnt;
            BFS(i);
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t ;
    while(t--){
        input();
        cout << connectCompoment() << endl;
    }
    return 0;
}