#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

int a[1001][1001];
int n,m;
vector<int> adj[1001];
vector<pair<int,int>> edge;

int main(){
    cin >> n;
    cin.ignore();
    for(int i = 1;i<=n;i++){
        string s,num;
        getline(cin,s);
        stringstream ss(s);
        while (ss >> num)
        {
            a[i][stoi(num)] =  1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] <<  " ";
        }
        cout << "\n";
    }
    return 0;
}