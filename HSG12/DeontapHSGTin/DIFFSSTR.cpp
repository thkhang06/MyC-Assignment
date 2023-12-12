#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i,l,r) for(int i = l; i <= r; ++i)
#define FOD(i,l,r) for(int i = l; i <= r; --i)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int n;
string s;

void solve(){
    cin >> n >> s;
    bool c;
    FOR(l,1,n) {
        c = true;
        FOR(i,0,n-l-1) {
            FOR(j,i+1,n-l) if (s.substr(i,l) == s.substr(j,l)) {
                c = false;
                break;
            }
            if (!c) break;
        }
        if (c) {
            cout << l;
            return;
        }
    }
}

int main(){
    fast;
    //freopen("DIFFSSTR.inp","r",stdin);
    //freopen("DIFFSSTR.out","w",stdout);
    solve();
}
