#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n, m ; cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=n-1;i>=0;i--) {// in ra bắt đầu từ hàng mấy 
        for(int j=m-1;j>=0;j--) {//in ra bắt đầu từ cột mấy 
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}