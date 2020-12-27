#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
const ll SIZE=1<<10;
ll array[SIZE+1];
ll cumsum[SIZE+1];

ll sum(ll a, ll b) {
    if (a >= b) {
        return 0;
    }
    return cumsum[b] - cumsum[a-1];
}

void add (ll a, ll x) {
    for (ll i = a; i <= SIZE; i++) {
        cumsum[i] += x;
    }
}

int main(int argc, char *argv[])
{
    for (ll i = 1; i <= SIZE; i++) {
        array[i] = i;
    }

    for (ll i = 1; i <= SIZE; i++) {
        cumsum[i] = cumsum[i - 1] + array[i];
    }

    return 0;
}