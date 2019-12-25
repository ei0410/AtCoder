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

string func(ll n, string c) {
    string s = "";
    while (n > 0) {
        s += c;
        n--;
    }
    return s;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    string S = "";

    ll y = ty-sy;
    ll x = tx-sx;

    S += func(y, "U");
    S += func(x, "R");
    S += func(y, "D");
    S += func(x, "L");

    y++;
    x++;

    S += "L";
    S += func(y, "U");
    S += func(x, "R");
    S += "D";
    S += "R";
    S += func(y, "D");
    S += func(x, "L");
    S += "U";

    cout << S << endl;
    return 0;
}