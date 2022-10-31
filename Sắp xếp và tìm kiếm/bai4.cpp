#include<iostream>
using namespace std;

void Solve(){
    int m,n,a;
    cin >> n >> m;
    int d[100005] = {0};
    for(int i=0;i<m+n;i++){
        cin >> a;
        d[a]++;
    }

    for(int i=0;i<100000;i++)
        if(d[i] > 0) 
            cout << i << " ";
    cout << endl;

    for(int i=0;i<100000;i++)
        if(d[i] > 1)
            cout << i << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}