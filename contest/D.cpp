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

    string s;
    cin >> s;

    vector<ll> a(26, 0);
    ll right = 1;
    for (ll left = 0; left < s.size(); left++) {
        // while(right < N && check()) {
        while(right < s.size()){
            a[s[right]-'a']++;
            rep (i, 26) {
                if (2*a[i] > right-left+1) {
                    cout << left+1 << " " << right+1 << endl;
                    return 0;
                }
            }
            right++;
        }

        if (left == right+1) {
            right++;
        } else {
            a[s[left]]--;
        }
    }

    cout << -1 << " " << -1 << endl;
    return 0;
}