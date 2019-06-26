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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    string str = "";
    for (ll i = 0; i < S.size(); i++) {
        for (ll j = i; j < S.size(); j++) {
            if (S.substr(0, i)+S.substr(j, S.size()-j) == "keyence") {
                YES;
                return 0;
            }
        }
    }

    NO;
    return 0;
}