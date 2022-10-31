#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        bool ok;
        string s;
        stack<char> st;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i] == ')'){
                ok =true;
                char top = st.top();
                st.pop();
                while(top != '('){
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                        ok =false;
                    top = st.top();
                    st.pop();
                }
                if(ok) break;
            }
            else st.push(s[i]);
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}