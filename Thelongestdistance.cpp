#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    double x[N];
    double y[N];
    for (int i = 0; i < N; i++) {
        std::cin >> x[i] >> y[i];
    }

    double max = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double distance = std::sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])); 
            if (max < distance) {
                max = distance;
            }
        }
    }

    std::cout << max << std::endl;
    return 0;
}