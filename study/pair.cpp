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
    vector<int> a = {1, 3, 2};
    vector<int> b = {5, 4, 6};
    vector<Pii> p;
    for (int i = 0; i < a.size(); i++) {
        p.push_back(make_pair(a[i], b[i]));
        // p.emplace_back(a[i], b[i]);
    }

    for (int i = 0; i < p.size(); i++) {
        cout << p[i].first << ":" << p[i].second << endl;
    }

    sort(p.begin(), p.end());
    // sort(p.rbegin(), p.rend());
    for (int i = 0; i < p.size(); i++) {
        cout << p[i].first << ":" << p[i].second << endl;
    }

    for (int i = 0; i < p.size(); i++) {
        int tmp = p[i].first;
        p[i].first  = p[i].second;
        p[i].second = tmp;
    }

    for (int i = 0; i < p.size(); i++) {
        cout << p[i].first << ":" << p[i].second << endl;
    }

    sort(p.begin(), p.end());
    // sort(p.rbegin(), p.rend());
    for (int i = 0; i < p.size(); i++) {
        cout << p[i].first << ":" << p[i].second << endl;
    }
    return 0;
}