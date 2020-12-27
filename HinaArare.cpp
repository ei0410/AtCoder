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

    vector<ll> num(4, 0);
    rep (i, N) {
        char S;
        cin >> S;
        if (S == 'P') {
            num[0]++;
        } 
        if (S == 'W') {
            num[1]++;
        } 
        if (S == 'G') {
            num[2]++;
        } 
        if (S == 'Y') {
            num[3]++;
        } 
    }

    if (num[0] == 0 || num[1] == 0 || num[2] == 0 || num[3] == 0) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    return 0;
}