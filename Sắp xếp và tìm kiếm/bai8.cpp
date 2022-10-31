#include<iostream>
#include<algorithm>
using namespace std ;

// X^y > y^x ==> y > x;
//sẽ có 1 vài trường hợp mà không thỏa mãn điều kiện -> tức là điều kiện sẽ sai
//sẽ phải xử lý 1 vài trường hợp đặc biệt này 

// x ==0 mọi y thì x^y <= y ^ x, dem+=0;
//x==1, y==0 thì x^y > y^x , dem+=1;
//x==2 ,y==3 or 4, thì x^y <=y^x , dem - dem(y4) - dem(y3)
// x==3 , y==2 thì x^y > y^x , dem += dem(y2)

long Count (int y[],int m,int d[], int x){
    if(x==0) 
        return 0;
    if (x==1) 
        return d[0];
    int tmp = upper_bound(y,y+m,x) - y;
    long ans = m-tmp;
    ans += d[0] +d[1];
    if(x==2) 
        ans -= (d[3] + d[4]);
    if(x==3)
        ans += d[2];
    return ans;
}

void Solve(){
    int n,m;
    cin >> n >> m;
    int x[n],y[m];
    for(int i=0;i<n;i++)
        cin >> x[i];
    int d[10]={0};
    for(int j=0;j<m;j++){
        cin >> y[j];
        if(x[j] < 5 ) 
            d[x[j]]++;
    }
    sort(y,y+m);
    long res = 0;
    for(int i=0;i<n;i++)
        res += Count(y,m,d,x[i]);
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}