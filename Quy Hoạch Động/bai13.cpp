#include<iostream>
using namespace std;

long long Ugly(int n){
    long long ugly[n];
    long long i2=0,i3=0,i5=0;
    ugly[0]=1;
    for(int i=1;i<n;i++){
        ugly[i] = min(ugly[i2]*2, min(ugly[i3]*3, ugly[i5]*5));

        if(ugly[i] == ugly[i2]*2)
            i2+= 1;
        if(ugly[i] == ugly[i3]*3)
            i3+= 1;
        if(ugly[i] == ugly[i5]*5)
            i5 += 1;
    }
    return ugly[n-1];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << Ugly(n) << endl;
    }
    return 0;
}