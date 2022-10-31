#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    string s;
    int n;
    stack<int> st;
    while(t--){
        cin >> s;
        if(s=="PUSH"){
            cin >>n;
            st.push(n);
        }
        else if(s=="POP" && st.size() > 0) st.pop();
        else if(s=="PRINT"){
            if(st.empty()) cout << "NONE\n";
            else cout << st.top() << "\n";
        }
    }
    return 0;
}
