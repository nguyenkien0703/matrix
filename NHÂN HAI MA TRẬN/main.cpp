/*
Tính tích của 2 ma trận
Cho ma trận a có cấp nxm, ma trận b có cấp mxp, tính tích của 2 ma trận trên
Input
Dòng đầu tiên là 3 số n, m, p (1≤m, n, p ≤100).
N dòng tiếp theo mỗi dòng m số của ma trận thứ 1
M dòng tiếp theo mỗi dòng p số của ma trận thứ 2
Output
In ra tích của 2 ma trận ban đầu
Ví dụ
Input 
3 4 5

1 2 3 4
5 6 7 8
9 10 11 12

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
ouput
110 120 130 140 150
246 272 298 324 350
382 424 466 508 550
*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n ,m ,p;
    scanf("%d%d%d",&n,&m,&p);
    int a[n][m],b[m][p], c[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int  j=0;j<p;j++){
            //tình toán c[i][j]
            c[i][j] =0;
            for(int k=0;k<m;k++){
                c[i][j] +=a[i][k]*b[k][j];
            }
        }
    }


    //in ra ma trận tích của 2 ma trận
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
/*
=======CÒN ĐÂY ;À TÍCH CỦA BA MA TRẬN 


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n ,m ,p,q;
    scanf("%d%d%d%d",&n,&m,&p,&q);
    int a[n][m],b[m][p], tich1[n][p],d[p][q],ans[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&d[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int  j=0;j<p;j++){
            //tình toán tich1[i][j]
            tich1[i][j] =0;
            for(int k=0;k<m;k++){
                tich1[i][j] +=a[i][k]*b[k][j];
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            //tinh toan ans[i][j];
            ans[i][j] =0;
            for(int k=0;k<p;k++){
                ans[i][j] +=tich1[i][k]*d[k][j];
            }
        }
    }
    // in ra ma tran cuoi cung 
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}   




*/