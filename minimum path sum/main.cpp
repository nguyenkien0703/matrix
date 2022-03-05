/*
cho ma trận cớ n *m , bạn hẫy tìm đường đi với tổng nhỏ nhất từ ô (1,1,) đến ô (m, n) 
bạn chỉ dc phép di chuyển xuống dưới or sang phải 
2 3
1 2 3
4 5 6 
-> 12

*/


#include<bits/stdc++.h>
using namespace std ;


int main(){
   int n, m ; cin >> n>>m ;
   int a[n][m];
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int dp[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==0 && j==0){
                dp[i][j] =a[i][j];
            }else if(i==0){//hàng đầu tiên thì nó chỉ cs thể đi  từ trái sang 
                dp[i][j] =dp[i][j-1]+a[i][j];
            }else if(j==0){//coọt đầu tiên htì nó chỉ có thể đi từ trên xuống 
                dp[i][j]=dp[i-1][j]+a[i][j];
            }else {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];
            }
        }

    }
   
    cout<<dp[n-1][m-1]<<endl;
    return 0;
}