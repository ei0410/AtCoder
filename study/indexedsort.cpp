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
    vector<int> x;
    x.push_back(11);
    x.push_back(7);
    x.push_back(3);
    x.push_back(4);
    x.push_back(8);

    vector<Pii> y;
    for (int i = 0; i < x.size(); i++) {
        y.push_back(Pii(x[i], i));
    }

    sort(y.begin(), y.end());
    for (vector<Pii>::iterator it = y.begin(); it != y.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}