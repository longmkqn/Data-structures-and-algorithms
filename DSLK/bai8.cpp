#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin >>s;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')'){
                if(!st.empty()){
                    int top = st.top();
                    st.pop();
                    if (top == 0) continue;
                    else if(s[top-1] == '+') continue;
                    else if(s[top-1] == '-'){
                        for(int j=top;j <=i;j++){
                            if(s[j] == '-') s[j] = '+';
                            else if(s[j] == '+') s[j] ='-';
                        }
                    }
                }
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='('&& s[i]!=')')
                cout << s[i];
        }
        cout <<endl;
    }

    return 0;
}