#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+5],b[n+5];
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i] = abs(k - a[i]);
        }

        for(int i=0;i<n;i++)
            for(int j=0;j<n-i-1;j++)
                if(b[j] > b[j+1]){
                    swap(b[j],b[j+1]);
                    swap(a[j],a[j+1]);
                }

        for(int i=0;i<n;i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}