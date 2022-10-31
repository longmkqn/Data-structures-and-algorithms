#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

bool ok[1000005] = {false};

void Sang(){
    ok[0] = ok[1] = true;
    for  (long long i=2;i<=sqrt(1000000);i++){
        if (!ok[i]){
            for (long long j=i*i ;j<=1000000;j+=i){
                ok[j]=true;
            }
        }
    }
}

void Solve(){
    long long n;
    cin >> n;
    bool test = false;
    for(long long i=2;i<=n;i++){
        if(ok[i] == false && ok[n-i] == false){
            cout << i << " " << n-i;
            test = true;
            break;
        }
    }
    if(!test) cout << -1 ;
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    Sang();
    while(t--)
        Solve();
    return 0;
}