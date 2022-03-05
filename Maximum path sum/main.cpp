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
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(j==0){
                a[i][j] += max(a[i-1][j],a[i-1][j+1]);
            }
            else if( j == m-1){
                a[i][j] += max(a[i-1][j], a[i-1][j-1]);
            }else{
                a[i][j] += max({a[i-1][j-1],a[i-1][j],a[i-1][j+1]});
            }
            
        }

    }
    /*
    có thể viết code tối ưu cho đoạn tìm ptu lớn nhất ở hàng cuối cùng như sau nh
    côut<<*max_element(a[n-1],a[n-1]+m)<<endl;
    */
    int res = INT_MIN;//khai baos 1 caí giá trị rất nhỏ  
    // ta chỉ cần xem các số ở dong cuối sau khi đã code ở trên ở ma trận mới , số nào lớn nhất thì đó là value cần tìm 

    for(int j=0;j<m;j++) {

        res = max(res,a[n-1][j]);

    }
    cout<<res<<endl;

    return 0;
}