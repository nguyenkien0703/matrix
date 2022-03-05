#include<bits/stdc++.h>
using namespace std ;
int nt(int n ) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i ==0){
            return 0;
        }
    }
    return n> 1;
}
int main() {

    int n, m ; cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    int res=0, hang;// res là 1 biến lưu kỉ lục 
    for(int i=0;i<n;i++) {
        int cnt =0;//đer đếm xem hàng thứ i bao nhiêu số nguyên tố 
        for(int j=0;j<m;j++) {
          if(nt(a[i][j])){
              ++cnt;
          }
        }
        if(cnt > res) {//nếu cái số đếm nguyên tố đấy àm lớn hơn kỉ lục của chúng ta 
            res =cnt;
            hang =i;
        }


    }
    cout<<hang+1<<endl;
    for(int j=0;j<m;j++) {
       if(nt(a[hang][j])){
           cout<<a[hang][j]<<" ";
       }
    }
    return 0;
}