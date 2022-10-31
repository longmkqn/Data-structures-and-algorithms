#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void Solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);

    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    int l=0 ,r=0;
    sort(b.begin(),b.end()); 
    for(int i=1;i<=n;i++){
        if(a[i] != b[i]){
            l=i;
            break;
        }
    }
    for(int i=n;i>=1;i--){
        if(a[i] != b[i]){
            r=i;
            break;
        }
    }
    cout << l << " " << r ;
    cout << "\n";

}

int main(){
    int t;
    cin >> t;
    while(t--)
        Solve();
    return 0;

}
