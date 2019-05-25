#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N >> A >> B;

    std::vector<int> P(N);
    for (int i = 0; i < N; i++) {
        std::cin >> P[i];
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i < N; i++) {
        if (P[i] <= A) {
            count1++;
        }
        if (P[i] >= A+1 && P[i] <= B) {
            count2++;
        }
        if (P[i] >= B+1) {
            count3++;
        }
    }

    std::cout << std::min({count1, count2, count3}) << std::endl;
    return 0;
}