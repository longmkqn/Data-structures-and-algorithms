#include<iostream>
#include<vector>
using namespace std;

void Solve(){
    int n;
    cin >> n;
    vector<int> a(n),F1(n),F2(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        F1[i] = a[i];
        F2[i] = a[i];
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[i] > a[j])
                F1[i] = max(F1[i],F1[j]+a[i]);
    
    for(int i=n-1;i>=0;i--)
        for(int j=n;j>i;j--)
            if(a[i] > a[j])
                F2[i] = max(F2[i],F2[j]+a[i]);
    
    int res = 0;
    for(int i=0;i<n;i++)
        res = max(res, F1[i] + F2[i] - a[i]);

    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}