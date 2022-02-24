#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
#define MAX 100
#define MAXINT 2000000000
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int a[n+5][m+5],dp[n+5][m+5];
    FOR(i,1,n) FOR(j,1,m) cin >> a[i][j];
    FOR(i,1,n) {
        dp[0][i] = MAXINT;
        dp[n+1][i] = MAXINT;
        dp[i][1] = a[i][1];
    }
    FOR(j,2,m) FOR(i,1,n) dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i+1][j-1]))+a[i][j];
    int res = MAXINT;
    FOR(i,1,n) 
        res = min(res,dp[i][m]);
    cout << res;
}
int main(){
    fast;
    freopen("WTOE.inp","r",stdin);
    freopen("WTOE.out","w",stdout);
    solve();
    return 0;
}

