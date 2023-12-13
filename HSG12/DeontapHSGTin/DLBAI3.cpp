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

void solve(){
    cin >> n;
    FOR(i,1,n) {
        int a[1000] = {0};
        string s;
        bool c = false;
        cin >> s;
        FOR(i,0,s.size()-1) a[(int)s[i]]++;
        FOR(i,0,s.size()-1) if (a[(int)s[i]] == 1) {
            cout << i+1 << '\n';
            c = true;
            break;
        }
        if (!c) cout << -1 << '\n';
    }
}

int main(){
    fast;
    freopen("DLBAI3.inp","r",stdin);
    freopen("DLBAI3.out","w",stdout);
    solve();
    return 0;
}
