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
    string s;
    cin >> s;
    int n = s.size() / 2;
    int increment;
    if (s.size() & 1)
    {
        increment = 2 * n - 1;
    }
    else
    {
        increment = 2 * n - 2;
    }
    int sum = 0, value = s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
            sum += value;
        n--;
        if (n >= 0)
        {
            value = value + increment;
            increment -= 2;
        }
        if (increment == -2)
            increment = 2;
        if (increment == -1)
            increment = 1;

        if (n < 0)
        {
            value = value - increment;
            increment += 2;
        }
    }
    cout << sum;
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