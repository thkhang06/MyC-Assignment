#include<bits/stdc++.h>

#pragma GCC optimize("Ofast")

using str = std::string;
using ull = unsigned long long;
using ii = std::pair <int, int>;

#define X first
#define Y second
#define endl '\n'
#define pb push_back
#define int long long
#define And << " " <<
#define len(x) (long long)x.length()
#define reset(a, x) memset(a, x, sizeof(a))
#define End cout << '\n' << "\n"; return 0;
#define Fu(i, l, r) for (int i = l; i <= r; i++)
#define enter_arr(x, n) Fu(i, 1, n) cin >> x[i];
#define File(x) freopen(x".INP", "r", stdin); freopen(x".OUT", "w", stdout);
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const int Max = 1e6;
const int N = 1e6 + 5;

/*-------------// Variables \\--------------*/
    int a[N], d[N];
/*------------------------------------------*/

bool scp(int a)
{
    int b = sqrt(a);
    return (b * b == a);
}

int cnt(int a)
{
    int ans = 0;
    for(int i = 1; i * i <= a; i++)
    {
        if (a % i == 0) ans += 2;
        if (ans > 10) break;
    }

    ans -= scp(a);
    return ans;
}

void precompute()
{
    for(int i = 1; i <= Max; i++)
    {
        if (!scp(i) || (i % 3 != 0)) continue;
        a[i] = (cnt(i) == 9);
    }

    for(int i = 1; i <= Max; i++)
        d[i] = d[i-1] + a[i];
}

void solve()
{
    int l, r; cin >> l >> r;
    cout << d[r] - d[l-1] << endl;
}

int32_t main()
{
    Fast;
    File("SDB");
    // freopen("test.inp", "r", stdin);

     precompute();
     int t; cin >> t; while(t--)
        solve();
    End;
}
