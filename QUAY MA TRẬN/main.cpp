/*
cho ma traanj a goomf các số nguyên dương. nhiệm vụ của bạn là quay ma trận theo chiều kim đồng hồ.
ví dụ 
1 2 3 
4 5 6
7 8 9
->
4 1 2
7 5 3
8 9 6
lamf nhuw ma trrận xoa2ns ốc ý , đây là bài 28tech bài tập mảng 2 chiều phần 3 

*/


#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main() {
    int n , m ;
    cin>> n>> m ; 
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    int h1=0, h2=n-1, c1=0,c2=m-1;
    while(h1<h2&&c1<c2) {
        int pre=a[h1+1][c1];
        for(int i=c1;i<=c2;i++) {
            int cur=a[h1][i];
            a[h1][i]=pre;
            pre=cur;
        }
        ++h1;
        for(int i=h1;i<=h2;i++) {
            int cur=a[i][c2];
            a[i][c2]=pre;
            pre=cur;
        }
        c2--;
        if(h1<=h2) {
            for(int i=c2;i>=c1;i--) {
                int cur=a[h2][i];
                a[h2][i]=pre;
                pre=cur;
            }
            h2--;
        }
        if(c1<=c2) {
            for(int i=h2;i>=h1;i--) {
                int cur=a[i][c1];
                a[i][c1]=pre;
                pre=cur;
            }
            c1++;
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}