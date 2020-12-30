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

const ll SIZE = 1<<10;
ll arr[SIZE+1];
ll cumsum[SIZE+1];

ll sum(ll a, ll b) {
    if (a >= b) {
        return 0;
    }
    return cumsum[b] - cumsum[a-1];
}

void add (ll a, ll x) {
    for (ll i = a; i <= SIZE; i++) {
        cumsum[i] += x;
    }
}

int main(void)
{
    for (ll i = 1; i <= SIZE; i++) {
        arr[i] = i;
    }

    for (ll i = 1; i <= SIZE; i++) {
        cumsum[i] = cumsum[i - 1] + arr[i];
    }

    return 0;
}