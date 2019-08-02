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

    ll N;
    cin >> N;

    for (ll i = 1; i <= N; i++) {
        string s = "";
        if (i%2 == 0) {
            s += "a";
        }
        if (i%3 == 0) {
            s += "b";
        }
        if (i%4 == 0) {
            s += "c";
        }
        if (i%5 == 0) {
            s += "d";
        }
        if (i%6 == 0) {
            s += "e";
        }

        if (s.empty()) {
            cout << i << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}