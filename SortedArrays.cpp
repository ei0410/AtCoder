#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int count = 1;
    int flag = 0;
    if (N >= 3) {
        for (int i = 1; i < N; i++) {
            if (A[i] > A[i-1]) {
                if (flag == 0) {
                    flag = 1;
                } else if (flag == -1) {
                    flag = 0;
                    count++;
                }
            } else if (A[i] < A[i-1]) {
                if (flag == 0) {
                    flag = -1;
                } else if (flag == 1) {
                    flag = 0;
                    count++;
                }
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}