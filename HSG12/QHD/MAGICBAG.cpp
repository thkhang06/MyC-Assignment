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
int main()
{
    fast;
    //freopen("MAGICBAG.inp","r",stdin);
    //freopen("MAGICBAG.out","w",stdout);
    int n;
    cin >> n;
    int a[n+5],dp[n+5] = {0};
    FOR(i,0,n-1) cin >> a[i];
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[0]+a[2];
    FOR(i,3,n-1) dp[i] = max(dp[i-2]+a[i],dp[i-3]+a[i]);
    cout << max(dp[n-2],dp[n-1]);
    return 0;
}
