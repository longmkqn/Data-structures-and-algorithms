#include<iostream>
using namespace std;
const long long mod = 1e9+7;
int C[1001][1001];
int  Comb(int n, int k){
    int i,j;
    C[0][0] =1 ;
    for (i=1;i<=n;i++){
        C[i][0] = 1;
        C[i][i] = 1;
        for(j = 1; j <i ;j++)
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
    return C[n][k];
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k ;
        cout << Comb(n,k)%mod << endl;
    }
    return 0;
}