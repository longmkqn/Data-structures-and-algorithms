#include<iostream>
#include<algorithm>
using namespace std;

struct data
{
    int x,y;
};

bool cmp(data a, data b){
    return a.x < b.x;
}

void Solve(){
    int n;
    cin >> n;
    data a[n+5];
    int F[n+5];
    for(int i=1;i<=n;i++){
        cin >> a[i].x >> a[i].y;
        F[i] = 1;
    }

    sort(a+1,a+n+1,cmp);

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[i].x > a[j].y)
                F[i] = max(F[i],F[j] + 1);
        }
    }
    cout << F[n] << endl;
}

int main(){
    int t;
    cin >> t ;
    while(t--)
        Solve();
    return 0;
}
