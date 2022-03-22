#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (ll)((x).size())
#define fr first
#define sc second
#define pii pair<ll, ll>
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppcll __builtin_popcountll
#define ppc __builtin_popcount
template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}
const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
const ll N = 0;
void solve(ll test)
{

    int a[] = {-2, 3, -4, 5, 4, 6, 3};
    int b[7];
    int maxi = 6, mini = -4;
    int range = maxi - mini + 1;
    int count[range];
    memset(count, 0, sizeof(count));
    memset(count, 0, sizeof(b));
    for (int i = 0; i < 7; i++)
    {
        count[a[i] - mini]++;
    }
    // for (int i = 0; i < 10; i++)
    //     cout << count[i] << " ";
    // cout << "\n";
    for (int i = 1; i <range; i++)
        count[i] += count[i - 1];
    //      for (int i = 0; i < 10; i++)
    //     cout << count[i] << " ";
    // cout << "\n";
    for (int i = 0; i < 7; i++)
    {
        b[count[a[i] - mini]-- - 1] = a[i];
    }
    for (int i = 0; i < 7; i++)
        cout << b[i] << " ";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
    sieve();
#endif
#ifdef NCR

    init();
#endif
    ll tc = 1;
    // cin >> tc;
    rep(i, 1, tc + 1) solve(i);
    return 0;
}