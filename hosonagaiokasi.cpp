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

    ll n;
    cin >> n;

    vector<ll> a(n);
    rep (i, n) {
        cin >> a[i];
    }

    set<ll> s;
    ll ans = 0;
    ll right = 0;
    for (ll left = 0; left < n; left++) {
        // while(right < N && check()) {
        while(right < n && s.count(a[right]) == 0){
            s.insert(a[right]);    
            right++;
        }

        ans = max(ans, ll(s.size()));
        if (left == right) {
            right++;
        } else {
            s.erase(a[left]);
        }
    }

    cout << ans << endl;
    return 0;
}