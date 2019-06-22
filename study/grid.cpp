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

int main(int argc, char *argv[])
{
    ll H, W;
    cin >> H >> W;

    vector<string> S(H+2);
    for (ll i = 0; i < H+2; i++) {
        for (ll j = 0; j < W+2; j++) {
            S[i].push_back('0');
        }
    }
    for (ll i = 1; i <= H; i++) {
        for (ll j = 1; j <= W; j++) {
            cin >> S[i][j];
        }
    }

    for (ll i = 0; i < H+2; i++) {
        for (ll j = 0; j < W+2; j++) {
            cout << S[i][j];
        }
        cout << endl;
    }
    return 0;
}