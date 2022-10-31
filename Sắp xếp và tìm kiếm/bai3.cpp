#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int dem =0,min_idx;

        for(int i=0;i<n-1;i++){
            min_idx = i;
            for(int j=i+1;j<n;j++){
                if (a[j] < a[i])
                    min_idx = j;
            }
            if(min_idx != i){
                swap(a[i],a[min_idx]);
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}