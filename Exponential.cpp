#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int X;
    std::cin >> X;

    std::vector<int> a;

    for (int b = 1; b < 33; b++) {
        for (int p = 2; p < 10; p++) {
            if (std::pow(b, p) <= X) {
                a.push_back(std::pow(b, p));
            }
        }
    }

    int max = 0;
    for (int i = 0; i < a.size(); i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    std::cout << max << std::endl;
    return 0;
}