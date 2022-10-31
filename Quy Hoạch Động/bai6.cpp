#include<iostream>
#include<cstring>
using namespace std;

bool F[1005][1005] = {false};

int main(){
    int t;
    cin >> t;
    while (t--){
        string s ;
        cin >> s;
        int n  = s.length();
        for (int i =0;i<n;i++){
            F[i][i] = true;
        }
        int res =1;
        for (int k = 1 ;k<n;k++){
            for (int i = 0 ;i<n-k;i++){
                int j = i+k;
                if (k == 1 && s[i] == s[j]) F[i][j] = true;
                else if (s[i] == s[j]) F[i][j] = F[i+1][j-1];
                else F[i][j] = false;
                if (F[i][j]) res = max (res,j-i+1);
            }
        }
        cout << res << endl;
    }
    return 0;
}