#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for (int i=l;i<=r;++i)
#define FOD(i,r,l) for (int i=r;i>=l;--i)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int,int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const ll N = 1e5+5;

ll n, m;
string dp[200][200];

string sum(string a, string b) {
    while (a.size() < b.size()) a = "0" + a;
    while (a.size() > b.size()) b = "0" + b;
    string c = "";
    int t = 0;
    for(int i = a.size() - 1; i >= 0; --i) {
        t += (a[i] - '0') + (b[i] - '0');
        c = char(t % 10 + '0') + c;
        t /= 10;
    }
    if (t > 0) c = char(t + '0') + c;
    return c;
}

void solve(){
    cin >> n >> m;
    FOR(i,1,n) dp[i][0] = "0";
    FOR(i,1,m) dp[0][i] = "0";
    dp[1][1] = dp[2][1] = dp[1][2] = "1";
    FOR(i,1,n) FOR(j,1,m) if (i+j != 2) dp[i][j] = sum(dp[i-1][j], dp[i][j-1]);
    cout << dp[n][m];
}

int main(){
    fast;
    //freopen("ROADSQUA.inp","r",stdin);
    //freopen("ROADSQUA.out","w",stdout);
    /*int t;
    cin >> t;
    while (t--)*/
    solve();
}
