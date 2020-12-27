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

    string A, B;
    cin >> A >> B;

    vector<ll> v;
    if (A[0] != '9') {
        string tmp = A.substr(0, 3);
        tmp[0] = '9';
        v.push_back(stoi(tmp)-stoi(B));
    }
    if (A[1] != '9') {
        string tmp = A.substr(0, 3);
        tmp[1] = '9';
        v.push_back(stoi(tmp)-stoi(B));
    }
    if (A[2] != '9') {
        string tmp = A.substr(0, 3);
        tmp[2] = '9';
        v.push_back(stoi(tmp)-stoi(B));
    }
    if (B[0] != '1') {
        string tmp = B.substr(0, 3);
        tmp[0] = '1';
        v.push_back(stoi(A)-stoi(tmp));
    }
    if (A[1] != '0') {
        string tmp = B.substr(0, 3);
        tmp[1] = '0';
        v.push_back(stoi(A)-stoi(tmp));
    }
    if (B[2] != '0') {
        string tmp = B.substr(0, 3);
        tmp[2] = '0';
        v.push_back(stoi(A)-stoi(tmp));
    }

    v.push_back(stoi(A)-stoi(B));

    ll ans = -INF;
    rep (i, v.size()) {
        ans = max(ans, v[i]);
    }

    cout << ans << endl;
    return 0;
}