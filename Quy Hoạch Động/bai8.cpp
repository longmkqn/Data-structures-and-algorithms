#include<iostream>
#include<algorithm>
using namespace std;

int n,m,a[505][505],F[505][505];

void Nhap(){
    cin >> m >>n;
    for(int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            F[i][j]= a[i][j];
        }
    }
}
int min(int a, int b, int c)
{
    a=min(a,b);
    return min(a,c);
}

void Solve(){
    int res = 0;
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            if (a[i][j] == 0) continue;
            if(a[i][j] == 1 && a[i][j] == a[i-1][j] && a[i][j]== a[i][j-1] && a[i][j] == a[i-1][j-1])
                F[i][j] = min(F[i-1][j],F[i][j-1],F[i-1][j-1]) +1 ;
            if (res < F[i][j]) res = F[i][j];
        }
    }
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Nhap();
        Solve();
    }
    return 0;
}