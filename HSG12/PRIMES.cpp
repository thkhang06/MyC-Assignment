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

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int cnt(int A, int B, int D) {
    int count = 0;
    for (int i = A; i <= B; ++i) {
        if (isPrime(i)) {
            int temp = i;
            while (temp > 0) {
                if (temp % 10 == D) {
                    ++count;
                    break;
                }
                temp /= 10;
            }
        }
    }
    return count;
}

void solve() {
    int a,b,d;
    cin >> a >> b >> d;
    cout << cnt(a,b,d);
}

signed main(){
    fast;
    //freopen("PRIMES.inp","r",stdin);
    //freopen("PRIMES.out","w",stdout);
    solve();
}
