#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        queue<int>q;
        string s;
        cin >> s;
        if(s == "PUSH"){
            int n;
            cin >> n;
            q.push(n);
            cout << q.front() << endl;
        }
        else if(s == "POP" && !q.empty()) q.pop();  
    
        else if(s == "PRINTFRONT"){
            // if(!q.empty()) cout << q.front() <<endl;
            // else cout << "NONE\n";
            (!q.empty()) ? cout << q.front() << '\n' : cout << "NONE\n";
        }
    }
    return 0;
}