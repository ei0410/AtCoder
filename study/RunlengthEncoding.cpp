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
using Pcl = pair<char, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

vector<Pcl> RLE(string s) {
    vector<Pcl> p;

    ll N = s.size()-1;
    ll right = 0;
    rep (left, N) {
        while(right < N && s[right] == s[right+1]){
            right++;
        }
        p.push_back(make_pair(s[left], right-left+1));
        left = right;
        right++;
    }

    if (s[N-1] != s[N]) {
        p.push_back(make_pair(s[N], 1));
    }

    return p;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    vector<Pcl> p = RLE(S);

    rep (i, p.size()) {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}