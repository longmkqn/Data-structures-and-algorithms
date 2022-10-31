#include<iostream>
#include<queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        queue<int>q;
        int n;
        cin >> n;
        while(n--){
            int so;
            cin >> so;
            if(so == 1) cout << q.size() << "\n";
            else if(so == 2){
                if(q.empty()) cout << "YES" << endl;
                else cout << "NO" <<endl;
            }
            else if(so == 3){
                int i;
                cin >> i;
                q.push(i);
            }
            else if(so == 4){
                if(!q.empty()) q.pop();
            }
            else if(so == 5){
                if(!q.empty()) cout << q.front() <<endl;
                else cout << -1 << endl;
            }
            else if(so == 6){
                if(!q.empty()) cout << q.back() << endl;
                else cout << -1 << endl;
            }
            // int val =so;
            // if (val == 3 || val == 4) cout << endl;
        }
    }
    return 0;
}