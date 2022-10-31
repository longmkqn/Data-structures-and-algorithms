#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            char x= s[i];
            if(x=='('){
                st.push(x);
            }
            else if (x==')'){
                if(st.empty()) continue;
                else if(st.top() == '('){
                    cnt += 2;
                    st.pop();
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}