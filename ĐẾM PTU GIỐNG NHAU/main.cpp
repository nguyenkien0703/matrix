/*
cho ma trận vuông a cấp n , nhiêm vụ của bạn là đưa ra số các giá trị giống nhua ở tất cả
các hàng , ví dụ với ma trận a  dưới đây sẽ cho ta kết quả là 2 ứng vơis hai giá trị là 2 và  3 
2 3 2 3 
1 2 3 2 
2 6 2 3 
5 2 5 3 
thì ta thayá hàng nào số 2 và số 3 cũng đều cvó mặt nên kết quả sẽ là 2

*/
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
int cnt[26]={};
int main(){
    int n , m;
    cin>> n>> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        FOR(j,0,m-1){
            cin>> a[i][j];
            cnt[a[i][j]]++;
        }
    }
    map<int, int > mp;
    FOR(i,0,n){
        mp[a[0][i]]=1;
    }
    FOR(i,1,n){
        FOR(j,1,m-1){
            if(mp[a[i][j]]==i){
                mp[a[i][j]]++;
            }
        }
    }
    int cnt=0;
    for(auto  it : mp) {
        if(it.Y==n){
            ++cnt;
        }
    }
    cout<<cnt;




}
