#include<iostream>
#include<vector>
using namespace std;

void Solve(int n){
    cin >> n;
    vector<int> a(n),F(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        F[i] = a[i];
    }

    int res =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i] > a[j]){
                F[i] = max(F[i],F[j]+a[i]);
            }
        }
        res = max(res, F[i]);
    }
    cout << res << endl;
}

int main(){
    int t ;
    cin >> t;
    while(t--){
        int n;
        Solve(n);
    }
    return 0;
}