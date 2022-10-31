#include<iostream>
#include<algorithm>
using namespace std;

void Solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int x = a[n-1] +a[n-2];
    cout << x << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}