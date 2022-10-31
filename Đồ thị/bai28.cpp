#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int v,e;
vector<int> adj[1001];
int degeer[1001];

void input(){
    cin >> v >> e;
    for(int i =0;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        degeer[y]++;
    }
}

bool Kahn(){
    queue<int> q;
    for(int i=1;i<=v;i++){
        if(degeer[i] == 0) q.push(i);
    }
    int cnt = 0;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        ++cnt;
        for(int x : adj[v]){
            degeer[x]--;
            if(degeer[x]==0) q.push(x);
        }
    }
    if(cnt == v) return false;
    else return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        input();
        if(Kahn()) cout << "YES" << endl;
        else cout <<"NO" <<endl;
    }
    return 0;
}