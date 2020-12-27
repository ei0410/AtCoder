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
    ll n = 5;

    for (ll bit = 0; bit < (1<<n); bit++) {
        for (ll i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                cout << bit << " " << i << endl;
            }
        }
    }
    return 0;
}