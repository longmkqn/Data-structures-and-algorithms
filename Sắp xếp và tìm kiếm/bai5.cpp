#include<iostream>
using namespace std;

void Solve(){
    int a,m,n;
    int d[100005]={0};
    cin >> n >> m;
    for(int i=0;i<m+n;i++){
        cin >> a ;
        d[a]++;
    }

    for(int i=0;i<=100000;i++)
        if(d[i] > 0)
            cout << i << " ";
    
    cout << endl;

    for(int i=0;i<=100000;i++){
        if(d[i] > 1)
            cout << i << " ";
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}