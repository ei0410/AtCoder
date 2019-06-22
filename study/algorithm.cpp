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
    vector<ll> a, dummy;
    
    ll N = 10;
    for (ll i = 0; i < N; i++) {
        a.push_back(i);
    }

    //sort(a, a + N);
    //sort(a, a + N, greater<int>());
    sort(a.begin(), a.end());
    sort(a.rbegin(), a.rend());
    //sort(a.begin(), a.end(), greater<int>());

    //reverse(a, a + N);
    reverse(a.begin(), a.end());

    //copy(a, a + N, dummy.begin());
    copy(a.begin(), a.end(), back_inserter(dummy));

    for (ll i = 0; i < a.size(); i++) {
        cout << a[i] << endl;
    }

    for (ll i = 0; i < dummy.size(); i++) {
        cout << dummy[i] << endl;
    }

    //fill(a, a + N, 0);
    fill(a.begin(), a.end(), 0);
    return 0;
}