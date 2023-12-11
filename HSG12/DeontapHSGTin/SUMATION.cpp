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
double a[N];

void solve(){
    cin >> n;
    double s = 0;
    FOR(i,1,n) cin >> a[i], s += a[i];
    sort(a+1,a+1+n);
    s = s*5/100;
    if (n == 2) s = 0;
    FOR(i,1,n/2) {
        s += (a[i] + a[n-i+1])*5/100;
    }
    cout << setprecision(2) << fixed << s;
}

int main(){
    fast;
    // freopen("SUMATION.inp","r",stdin);
    // freopen("SUMATION.out","w",stdout);
    solve();
    return 0;
}

