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

int demuoc(int n) {
    int cnt = 0;
    FOR(i,1,sqrt(n)){
        if (n%i == 0) {
            if (n/i == i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}

void solve(){
    int a, b, kq = 0;
    cin >> a >> b;
    FOR(i,a,b) if (i%3 == 0 && demuoc(i) == 9) ++kq;
    cout << kq << '\n';
}

int main(){
    fast;
    //freopen("SDB.inp","r",stdin);
    //freopen("SDB.out","w",stdout);
    int t;
    cin >> t;
    while (t--) solve();
}
