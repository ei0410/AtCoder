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

vector<ll> vec[21];

ll dfs(ll n) {
    if (vec[n].size() == 0) {
        return 1;
    }
    
    ll mi = INF;
    ll ma = 0;
    for (ll i : vec[n]) {
        ma = max(ma, dfs(i));
        mi = min(mi, dfs(i));
    }

    return ma+mi+1;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    for (ll i = 1; i < N; i++) {
        ll B;
        cin >> B;
        vec[B-1].push_back(i);
    }

    cout << dfs(0) << endl;
    return 0;
}