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

string num = "0123456789";

vector<string> vec;
void dfs(string s) {
    if (s.size() >= 5) {
        return;
    }

    if (!s.empty()) {
        vec.push_back(s);
    }

    rep(i, num.size()) {
        dfs(num[i]+s);
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    dfs("");

    sort(vec.begin(), vec.end());

    rep (i, vec.size()) {
        cout << vec[i] << endl;
    }
    return 0;
}