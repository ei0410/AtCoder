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

    int ans = 0;
    if (N == 1) {
        ans = 4;
    } else if (N == 2) {
        ans = 16;
    } else if (N == 3) {
        ans = 64;
    } else if (N == 4) {
        ans = 256;
    } else if (N == 5) {
        ans = 1024;
    } 

    cout << ans << endl;
    return 0;
}