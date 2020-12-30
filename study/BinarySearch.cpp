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

int main(void)
{
    ll N = 24;

    ll left = 20;
    ll right = 36; 

    if (N < left || right < N) {
        cout << "error" << endl;
        return 1;
    }

    ll count = 0;
    while (right - left > 1) {
        ll mid = (right + left) / 2;

        count++;
        if (N == mid) {
            break;
        } else if (N > mid) {
            left = mid;
        } else if (N < mid) {
            right = mid;
        }

        if (count >= 100) {
            break;
        }
    }
    
    cout << count << endl;
    return 0;
}