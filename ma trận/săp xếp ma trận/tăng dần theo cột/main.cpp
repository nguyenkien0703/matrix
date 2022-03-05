#include<bits/stdc++.h>
using namespace std ;
int cmp(const void *a , const void *b){
   int *x = (int*)a;
   int *y = (int*)b;
   return *x <*y;
}
int main() {
    int n , m; cin >> n >> m ;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for(int j=0;j<m;j++) {
        qsort(a[j], n , sizeof(int), cmp );


        
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}