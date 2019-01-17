#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int A, B, C, D, E, F;
    std::cin >> A >> B >> C >> D >> E >> F;

    double percent = double(E) / double(100 + E); 
    int water, sugar;
    int ans1, ans2;
    double max = 0.0;
    for (int i = 0; i <= F; i += 100*A) {
        for (int j = 0; j <= F; j += 100*B) {
            for (int k = 0; k <= F - (i+j); k += C) {
                for (int l = 0; l <= F - (i+j+k); l += D) {
                    if (i == 0 && j == 0) {
                        break;
                    }
                    water = i+j+k+l;
                    sugar = k+l;
                    double conc = double(sugar) / double(water);
                    if (conc <= percent) {
                        if (max <= conc) {
                            max = conc;
                            ans1 = water;
                            ans2 = sugar;
                        }
                    }
                }
            }
        }
    }

    std::cout << ans1 << " " << ans2 << std::endl;

    return 0;
}