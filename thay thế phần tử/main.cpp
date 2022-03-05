//Thay thế phần tử của ma trận bằng tổng cảu nó và các  phần tử ở các ô xung quanh cùng cạnh với nó.

#include<bits/stdc++.h>
using namespace std ;
int dx[8] = {-1, -1, -1 , 0 ,0 , 1 ,1 ,1};
int dy[8] = { -1, 0 , 1 ,-1 , 1 ,-1, 0 , 1};

int main() {
    int n , m; cin >> n>> m ;
    int a[500][500];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    // taọ 1 ma trận mới để lưu các giá trị đã thay thế 
    int res[500][500];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
           int sum =a[i][j];
           for(int k=0;k<8;k++) {
               int imoi = i + dx[k];
               int jmoi = j + dy[k];
               //checck 1 điều kiện để ví dụ như ững th ở vị trí[0][0] nó k có cái số liền kề vs trái , trên 
               if(imoi>=0 && imoi<n && jmoi>=0 && jmoi<n) {
                  sum += a[imoi][jmoi];
               }
           }
           res[i][j] = sum; //gán gtri sum cho từng cái đã thay thế cho ma trận res
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

