//bài tập mảng 2 chiều phần 3 , 28tech
#include<bits/stdc++.h>
using namespace std ;

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int a[100][100];
int n, m ; 
void dfs(int i , int j ){
    a[i][j]=0;
    for(int k=0;k<8;k++) {
        int i1=i+dx[k];
        int j1=j+dy[k];
        //kiếmtra xem vị trí mới còn thuộc cái ma trận ban đầu không , và nó đang laong đến vị trí hiện tại thì vẫn là  bằng 1 
        if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1){
            dfs(i1,j1);
        }
    }




}
int main(){
   cin >> n>>m ;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++) {

        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                ++cnt;
                dfs(i,j);
            }
        }
    }    
    cout<<cnt<<endl;
}