#include<iostream>
#include<vector>
#include<cstring>
#include<stack>
using namespace std;

int v,e;
vector<int> adj[100001],r_adj[100001];
stack<int> st;
bool visited[100001];

void input(){
    cin >> v >> e;
    for(int i=0;i<e;i++){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        r_adj[y].push_back(x);
    }
}

void DFS1(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v])
            DFS1(v);
    }
    st.push(u);
}

void DFS2(int u){
    visited[u] = true;
    for(int v : r_adj[u]){
        if(!visited[v])
            DFS2(v);
    }
}

void SCC(){
    memset(visited,false,sizeof(visited));
    int cnt = 0;
    for(int i=1;i<=v;i++){
        if(!visited[i])
            DFS1(i);
    }
    vector<int>u;
    memset(visited,false,sizeof(visited));
    while(!st.empty()){
        int x = st.top();
        st.pop();
        if(!visited[x]){
            u.push_back(x);
            DFS2(x);
            cnt++;
        }
    }
    cout << cnt << endl;
    /*if(cnt == 1) cout << "YES\n";
    else {
        cout << "NO\n";
        cout << u[1] << " " << u[0];
    }*/
}

int main(){
    int t;
    //cin >> t
    t =1;
    while(t--){
        input();
        SCC();
        
    }
    return 0;
}