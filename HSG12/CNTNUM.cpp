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

double a,b,c,d;

long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

int countt(int A, int B, int M)
{
    if (A % M == 0)
        return (B / M) - (A / M) + 1;
    return (B / M) - (A / M);
}

void solve(){
    cin >> a >> b >> c >> d;
    double kq = (b-a+1) - (countt(a,b,c) + countt(a,b,d) - countt(a,b,lcm(c,d)));
    cout << kq;
    //cout << floor((b)/lcm(c,d))-floor((a)/lcm(c,d));
}

int main(){
    fast;
    //freopen("CNTNUM.inp","r",stdin);
    //freopen("CNTNUM.out","w",stdout);
    solve();
}
