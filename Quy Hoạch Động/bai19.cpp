#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,insert,remove,copy;
        cin >> n >> insert >> remove >> copy;
        int F[105];
        F[0] = 0;
        F[1] = insert ;
        for(int i=2;i<=n;i++){
            if (i%2 ==1){
                F[i] = min(F[i-1] + insert ,F[(i+1)/2] + remove +copy);
            }
            else 
                F[i] = min(F[i-1] + insert ,F[i/2] + copy);
        }
        cout << F[n] << endl;
    }
    return 0;
}