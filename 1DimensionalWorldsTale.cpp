#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, M, X, Y;
    std::cin >> N >> M >> X >> Y;

    std::vector<int> x(N);
    for (int i = 0; i < N; i++) {
        std::cin >> x[i];
    }

    std::vector<int> y(M);
    for (int i = 0; i < M; i++) {
        std::cin >> y[i];
    }

    bool flag = false;
    for (int Z = -100; Z <= 100; Z++) {
        bool xflag = true;
        if (X < Z && Z <= Y) {
            for (int j = 0; j < N; j++) {
                if (x[j] >= Z) {
                    xflag = false;
                    break; 
                }
            }
            bool yflag = true;
            if (xflag) {
                for (int k = 0; k < M; k++) {
                    if (y[k] < Z) {
                        yflag = false;
                    }
                }
                if (yflag) {
                    flag = true;
                }
            }
        }
    }

    if (flag) {
        std::cout << "No War" << std::endl;
    } else {
        std::cout << "War"    << std::endl;
    }
    return 0;
}