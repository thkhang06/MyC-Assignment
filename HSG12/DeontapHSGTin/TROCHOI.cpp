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
const int N = 1e4+5;

int n;

struct dta{
    int x;
    string y;
    int z;
} a[N];

int val(string s) {
    int dem = 0;
    FOR(i,0,s.size()-1)
        if (s[i] >= '0' && s[i] <= '9') dem++;
    return dem;
}

int first(string s) {
    return s[0];
}

bool cmp(dta a, dta b) {
    if (a.x == b.x) return a.z < b.z;
    return a.x < b.x;
}

void solve(){
    cin >> n;
    FOR(i,1,n) {
        cin >> a[i].y;
        a[i].x = val(a[i].y);
        a[i].z = i;
    }
    sort(a+1,a+1+n,cmp);
    FOR(i,1,n) cout << a[i].y << '\n';
}

int main(){
    fast;
    // freopen("TROCHOI.inp","r",stdin);
    // freopen("TROCHOI.out","w",stdout);
    solve();
    return 0;
}
