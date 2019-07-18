#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<char> s(4);
    rep (i, 4) {
        cin >> s[i];
    }

    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
        No;
        return 0;
    }

    if (s[0] == s[1] && s[2] == s[3]) {
        Yes;
    } else {
        No;
    }
    return 0;
}