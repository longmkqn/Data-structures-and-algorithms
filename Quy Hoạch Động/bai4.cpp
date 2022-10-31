#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int F[1003][51];
        F[0][0] = 0;
        for (int i=1;i<=n;i++){
            F[0][i] = -1005;
        }
        int a;
        for (int i=1;i<=n;i++){
            cin >> a ;
            a %= k;
            for (int j=0;j<k;j++){
                F[i][j] = max(F[i-1][j],F[i-1][(j+k-a)%k]+1);
            }
        }
        cout << F[n][0] << endl;
    }
    return 0;
}