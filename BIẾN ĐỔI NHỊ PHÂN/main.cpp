/*
cho ma trận cớ n *m ,chỉ bao gồm các số 0 và 1 . hãy sửa đổi các ptu của ma trận a theo nguyên tắc L: neéu ptu a[i][j] =1 thì  ta thay tất cả cac ptu ở hàng i 
và coọt j thành 1 ; vi sudj 
1 0 0 1 
0 0 1 0 
0 0 0 0 
-> 1 1 1 1
    1 1 1 1 
    1 0 1 1 

*/

//idea lầ tạo 1 cái ma trạn khac y hệt như ma trận ban đầu và thay đổi các ptu trên ma trận này 

#include<bits/stdc++.h>
using namespace std ;


int main(){
   int n, m ; cin >> n>>m ;
   int a[n][m],b[n][m];
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]){
                for(int k=0;k<m;k++) {
                    b[i][k]=1;
                }
                for(int k=0;k<n;k++) {
                    b[k][j]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}