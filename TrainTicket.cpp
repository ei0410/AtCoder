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

    string S;
    cin >> S;

    ll n = S.size()-1;
    for (ll bit = 0; bit < (1<<n); bit++) {
        ll sum = S[0]-'0';
        string s; 
        s += S[0];
        for (ll i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                s += '+';
                sum += S[i+1]-'0';
            } else {
                s += '-';
                sum -= S[i+1]-'0';
            }
            s += S[i+1];
        }

        if (sum == 7) {
            cout << s + "=7" << endl;
            break;
        }
    }
    return 0;
}