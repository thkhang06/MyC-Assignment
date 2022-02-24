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
#define int long long
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[105][105],dp[105][105];
    FOR(i,1,n) 
    FOR(j,1,i) 
        cin >> a[i][j];
    dp[0][0] = 0;
    dp[1][1] = a[1][1];
    FOR(i,1,n)  
        dp[i][2] = dp[i-1][2]+a[i][2];
    FOR(i,2,n)  
    FOR(j,1,n) 
        dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
    int res = INT_MIN;
    FOR(i,1,n) res = max(res,dp[n][i]);
    cout << res;
}
int32_t main(){
    fast;
    freopen("GTANGLE.inp","r",stdin);
    freopen("GTANGLE.out","w",stdout);
    solve();
    return 0;
}

