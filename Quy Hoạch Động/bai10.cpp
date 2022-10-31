#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n,m,F[1005][1005],a[1005][1005];

void Nhap(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for (int j= 1;j<=m;j++){
            cin >>  a[i][j];
        }
    }
}

int min (int a,int b,int c){
    a=min(a,b);
    return min(a,c);
}

void Solve(){
    memset(F,0,sizeof(F));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 && j==1)
                F[i][j] = a[i][j];
            else if (i == 1)
                F[i][j] = a[i][j] + F[i][j-1];
            else if (j == 1)
                F[i][j] = a[i][j] + F[i-1][j];
            else 
                F[i][j] = a[i][j] + min(F[i][j-1],F[i-1][j],F[i-1][j-1]);
        }
    }
    cout << F[n][m] << "\n";
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