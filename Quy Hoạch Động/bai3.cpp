#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n , S;
        cin >> n >> S;
        int a[205];
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int L[40005];
        int x;
        L[x] = 0;
        L[0] = 1;
        for(int i=1;i<=n;i++){
            for (int x = S ;x >= a[i]; x--){
                if (L[x] == 0 && L[x-a[i] == 1])
                    L[x]=1;
            }
        }
        if (L[x]==1)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}