#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        bool ok = true;
        for(int i=0;i<s.size();i++){
            char x = s[i];
            if(x == '(' || x == '[' || x=='{'){
                st.push(x);
            }
            else if(x==')'){
                if(st.empty()) ok =false;
                else if(st.top() == '(') st.pop();
            }
            else if(x==']'){
                if(st.empty()) ok =false;
                else if(st.top() == '[') st .pop();
            }
            else if(x== '}'){
                if(st.empty()) ok =false;
                else if(st.top() =='{') st.pop();
            }
        }
        if(!st.empty()) ok=false;
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}