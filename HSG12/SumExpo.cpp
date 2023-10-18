#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pub push_back
#define pob pop_back
#define ii pair<int, int>
#define pll pair<long long, long long>
#define F first
#define S second
typedef unsigned long long int ull;
using namespace std;
const int N = 1e5+5;

ll n, dl, dc;

void primefactors(ll n){
    while (n%2 == 0) {
        dc++;
        n = n/2;
    }
    for(int i = 3; i <= sqrt(n); i = i+2) {
        while (n%i == 0) {
            if (i&1) dl++;
            else dc++;
            n = n/i;
        }
    }
    if (n > 2) {
        if (n&1) dl++;
        else dc++;
    }
}

void solve() {
    cin >> n;
    primefactors(n);
    cout << dc << '\n' << dl;
}

signed main(){
    fast;
    //freopen("SumExpo.inp","r",stdin);
    //freopen("SumExpo.out","w",stdout);
    solve();
}
