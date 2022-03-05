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
    int res =0, cot;//đây kiểu như là hai biến, m có thể hiểu như kà 1 thằng chạy thu thập kết quả và truyền về cho thằn ở nhà ,  còn 1 thằng ở nhà lưu klết quả (res là thằng ở nhà , còn cnt là thằng chạyn)
    //cot là để nó xem cột nào alf cột có nhièu số nguyên tố nhât 
    for(int j=0;j<m;j++) {
        int cnt =0;//để đếm xem cột thứ j có bao nhiêu số nguyên tố 
        for(int i=0;i<n;i++) {
            if(nt(a[i][j])){//khi truy cập vào 1 số của ma trận thì bao h hàng cũng đi trc cột
                ++cnt;
            }
        }
        if(cnt > res) {
           res = cnt ;
            cot = j ;
        }
    }
    cout<<cot+1<<endl;
    for(int i=0;i<n;i++) {
        if(nt(a[i][cot])){
            cout<<a[i][cot]<<" ";
        }
    }
    return 0;
}