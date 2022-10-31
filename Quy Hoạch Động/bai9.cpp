#include<iostream>
using namespace std;
//dp[i][j] là các chữ số i có tổng là j 
// số có i chữ số sẽ đc tạo thành là thêm 1 số vào số i-1
// dp[i][j] += dp[i-1][j-so]
// số [i-1] có tổng là [j-so]
// trong đó so là số mình cần chèn vào trong chỗ i-1
//chèn như vậy ta đc 1 số i-1 +1 có tổng là j-so  + so ==j
//dp[0][j] ko có chữ số nà
//dp[i][0] có tổng =0

const long long mod = 1e9+7;
int dp[105][50005];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    for (int j=0;j<50005;j++){
            dp[0][j] = 0;
        }
        for(int i = 0;i<105;i++){
            dp[i][0] = 0;
        }
        for (int j=1;j<50005;j++){
            dp[1][j] = 1;
        }
        for(int i=1;i<105;i++){
            for(int so = 0;so<=9;so++){
                for (int j=so;j<50005;j++){
                    dp[i][j] += dp[i-1][j-so];
                    dp[i][j] %= mod;
                }
            }
        }
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
    return 0;
}