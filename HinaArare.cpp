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

    int N;
    cin >> N;

    set<int> s;
    rep (i, N) {
        char S;
        cin >> S;
        if (S == 'G') {
            s.insert(1);
        }
        if (S == 'W') {
            s.insert(2);
        }
        if (S == 'Y') {
            s.insert(3);
        }
        if (S == 'P') {
            s.insert(4);
        }
    }

    if (s.size() == 3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    return 0;
}