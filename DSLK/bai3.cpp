#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> st;
        for(int i=0;i<s.size();i++){
            while(s[i] != ' '  && i < s.size()){
                st.push(s[i++]);
            }
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            if(s[i] ==' ')
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}