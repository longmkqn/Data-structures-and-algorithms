#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio;cin.tie(0);


    stack<int>st;
    string s;
    int a;
    while(cin >> s){
        if(s=="push"){
            cin >> a;
            st.push(a);
        }
        else if(s == "pop") st.pop();
        else if (s == "show"){
            if(st.empty()){
                cout << "empty"<<endl;
                continue;
            } 
            vector<int> n;
            while(st.size() > 0){ 
                n.push_back(st.top());
                st.pop();
            }
            reverse(n.begin(),n.end());
            for(int i=0;i<n.size();i++){
                cout << n[i]<< " ";
                st.push(n[i]);
            }
            cout << "\n";
        }
        else if(s == "break")
            break;
    }
    return 0;
}