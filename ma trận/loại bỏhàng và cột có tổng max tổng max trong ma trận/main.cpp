#include<bits/stdc++.h>
using namespace std ;
int main() {
   int t ; cin >> t ;
  for(int i=1;i<=t;i++) {
      int n , m ; cin >> n >>  m;
       int a[n][m];
       for(int i=0;i<n;i++) {
           for(int j=0;j<m;j++) {
               cin >> a[i][j];
           }
       }
       // tìm hàng có tổng lớn nhất 
       int res =-1e9 , hang ;
       for(int i=0;i<n;i++){
           int sum =0;
           for(int j=0;j<m;j++) {
               sum += a[i][j];
           } 
           if(sum > res) {
               res = sum ;
               hang =i;
           }
       }
       // tìm cột có tổng max 
       
       int res1 = -1e9, cot;
       for(int i=0;i<m;i++) {
           int sum =0;
           for(int j=0;j<n;j++) {
               sum += a[j][i];
           }
           if(sum > res1) {
               sum = res1;
               cot =i;
           }
       }
       for(int i=0;i<n;i++) {
               for(int j=0;j<m;j++) {
                   if(j!= cot && i!=hang) {
                       cout<<a[i][j] << " ";
                   }
               }
               cout << endl;
           }
  }
    return 0;
}