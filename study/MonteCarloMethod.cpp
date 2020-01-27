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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

#define SAMPLES 10000000

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    srand((unsigned)time(NULL));

    ll cnt = 0;
    rep (i, SAMPLES) {
        double px = 1.0 * (rand() % 32768) / 32768.0;
        double py = 1.0 * (rand() % 32768) / 32768.0;
        if (px*px+py*py <= 1.0) {
            cnt++;
        }
    }
    
    cout << 4.0*cnt/SAMPLES << endl;
    return 0;
}