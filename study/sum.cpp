#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
const int SIZE=1<<10;
int array[SIZE+1];
int cumsum[SIZE+1];

int sum(int a, int b) {
    if (a >= b) {
        return 0;
    }
    return cumsum[b] - cumsum[a-1];
}

void add (int a, int x) {
    for (int i = a; i <= SIZE; i++) {
        cumsum[i] += x;
    }
}

int main(int argc, char *argv[])
{
    for (int i = 1; i <= SIZE; i++) {
        array[i] = i;
    }

    for (int i = 1; i <= SIZE; i++) {
        cumsum[i] = cumsum[i - 1] + array[i];
    }

    return 0;
}