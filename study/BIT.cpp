#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

const int SIZE = 1 << 10;
int array[SIZE + 1];
int BIT[SIZE + 1];

int sum(int a) {
    int ans = 0;
    while (a) {
        ans += BIT[a];
        int least = a&-a;
        a -= least;
    }
    return ans;
}

int sum(int a, int b) {
    if (a > b) {
        return 0;
    }

    return sum(b) - sum(a-1);
}

void add(int a, int x) {
    while (a <= SIZE) {
        BIT[a] += x;
        int least = a&-a;
        a += least;
    }
}
 
int main(int argc, char *argv[])
{
    for (int i = 1; i <= SIZE; i++) {
        array[i] = i;
    }

    for (int i = 1; i <= SIZE; i++) {
        add(i, array[i]);
    }

    return 0;
}