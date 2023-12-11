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
using namespace std;
const int N = 1e6+5;

int n;
int dp[N], t[N], p[N];

void solve(){
    cin >> n;
    FOR(i,0,n-1) cin >> t[i];
    FOR(i,0,n-2) cin >> p[i];
    dp[1] = t[0];
    FOR(i,2,1000005) dp[i] = min(dp[i-1] + t[i-1], dp[i-2] + p[i-2]);
    cout << dp[n];
}

int main(){
    fast;
    // freopen("WORK.inp","r",stdin);
    // freopen("WORK.out","w",stdout);
    solve();
    return 0;
}
