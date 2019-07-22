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

    vector<char> S(5);
    rep (i, 5) {
        cin >> S[i];
    }

    sort(S.begin(), S.end());
    if (S[0] == 'a' && S[1] == 'h' && S[2] == 'o' && S[3] == 'o' && S[4] == 'y') {
        YES;
    } else {
        NO;
    }
    return 0;
}
