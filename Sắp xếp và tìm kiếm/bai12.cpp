#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a, int b){
    return a>b;
}


void Solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<k;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--)
        Solve();
    return 0;
}