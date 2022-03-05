#include<bits/stdc++.h>
//đó là nó duyệt từ 1 đến n bình phương
using namespace std ;
int main() {
    int n ; cin >> n ;
    int a[n][n], cnt =1;//khởi tạo 1 biến để khi duyệt qua từng cái để gắn  value cho nó 
    int h1 =0, h2 =n-1, c1=0, c2= n-1;
    while(h1<=h2 && c1 <=c2) {
        //xây dựng hàng đầu tiên 
        for(int i= c1;i<=c2;i++){
           a[h1][i] = cnt;
           ++cnt;
        }
        ++h1;
        //xây dựng cạnh bên phải 
        for(int i=h1;i<=h2;i++) {
            a[i][c2] =cnt;
            ++cnt;
        }
        --c2;
        if(c1<=c2) {
            //xây đựng cạnh bên dưới 
            for(int i=c2;i>=c1;i--) {
                a[h2][i] = cnt;
                ++cnt;
            }
            --h2;
        }
        
        if(h1<=h2){
            //xây dựng cạnh bên trái 
            for(int i=h2;i>=h1;i--) {
                a[i][c1] = cnt;
                ++cnt;
            }
             ++c1;
        }
       
    } 
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}

