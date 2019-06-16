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

    ll N;
    cin >> N;

    string ss = to_string(N % 60);
    if (ss.size() == 1) {
        ss = "0" + ss;
    }
    string mm = to_string((N / 60) % 60);
    if (mm.size() == 1) {
        mm = "0" + mm;
    }
    string hh = to_string(N / 3600);
    if (hh.size() == 1) {
        hh = "0" + hh;
    }

    cout << hh << ":" << mm << ":" << ss << endl;
    return 0;
}