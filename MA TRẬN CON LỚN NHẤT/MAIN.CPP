/*baif tapppj mảnh hai chiều phần 3 . 28tech
hướng làm quy hoạch đồngj

cho ma trận a chỉ bao gồm các soó 0 và 1 . hãy tìm câó ma trận vuông con lonw nhât 
có csc phàn tử đều bằng 1 .  ví dụ dưới ddây thì ma trận càn tìm kà ma trận vhông câo 3 
0 1 1 0 1
1 1 0 1 0 
0 1 1 1 0
1 1 1 1 0 
1 1 1 1 1
0 0 0 0 0
*/
//28tech  baif taapj mảng hai chiề phần 3 



#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
const int N = 1001;
int n, m, a[N][N],dp[100][100];
 
int main()
{
    cin>> n>> m;
    FOR(i,0,n-1){
        FOR(j,0,m-1){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        dp[0][i] =a[0][i];
    }
    for(int i=0;i<n;i++){
        dp[i][0] =a[i][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]){
                dp[i][j] =min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
            }else{
                dp[i][j] =0;
            }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;

}