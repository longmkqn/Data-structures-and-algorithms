#include<iostream>
#include<cstring>
using namespace std;
int F[105][105][105];

void Solve(int n, int m, int l){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    memset(F,0,sizeof(F));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for (int k=1;k<=l;k++){
                if (s1[i-1] == s2[j-1] && s2[j-1]==s3[k-1])
                    F[i][j][k] = F[i-1][j-1][k-1] + 1;
                else 
                    F[i][j][k] = max(F[i-1][j][k],max(F[i][j-1][k],F[i][j][k-1]));
            }
        }
    }
    cout << F[n][m][l] << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,l;
        cin >> n >> m >> l;
        Solve(n,m,l);
    }
    return 0;
}