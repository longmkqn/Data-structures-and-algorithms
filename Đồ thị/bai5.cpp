#include<iostream>
#include<vector>
using namespace std;

vector<int> adj[1001];
int n,m;

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
    }
    for(int i=1;i<=n;i++){  
        cout << i << ": ";
        for(int x : adj[i]){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}