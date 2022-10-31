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
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == ')' && st.empty())
                st.push(s[i]);
            else if(s[i] == ')'){
                if(!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        int d1=0,d2=0;
        while(!st.empty()){
            if(st.top() == '(') d1 ++;
            else d2++;
            st.pop();
        }
        int res = d1/2 +d2/2+d1%2+d2%2;
        cout << res << endl;
    }

    return 0;
}