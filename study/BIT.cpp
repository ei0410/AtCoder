#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

const ll SIZE = 1 << 10;
ll array[SIZE + 1];
ll BIT[SIZE + 1];

ll sum(ll a) {
    ll ans = 0;
    while (a) {
        ans += BIT[a];
        ll least = a&-a;
        a -= least;
    }
    return ans;
}

ll sum(ll a, ll b) {
    if (a > b) {
        return 0;
    }

    return sum(b) - sum(a-1);
}

void add(ll a, ll x) {
    while (a <= SIZE) {
        BIT[a] += x;
        ll least = a&-a;
        a += least;
    }
}
 
int main(void)
{
    for (int i = 1; i <= SIZE; i++) {
        array[i] = i;
    }

    for (int i = 1; i <= SIZE; i++) {
        add(i, array[i]);
    }

    return 0;
}