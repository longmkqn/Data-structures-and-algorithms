#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a.begin(),a.end());

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)  
        Solve();
    return 0;
}