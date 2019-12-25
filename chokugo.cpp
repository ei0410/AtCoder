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

    reverse(S.begin(), S.end());
    while (S.size() > 0) {
        if (S[0] == 'o' || S[0] == 'k' || S[0] == 'u') {
            S = S.substr(1, S.size()-1);
        } else if (S.size() > 1) {
            if (S[0] == 'h' && S[1] == 'c') {
                S = S.substr(2, S.size()-1);
            } else {
                NO;
                return 0;
            }
        } else {
            NO;
            return 0;
        }
    }

    YES;
    return 0;
}