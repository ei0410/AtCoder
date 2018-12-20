#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

std::vector<int> a = {1, 14, 32, 51, 51, 243, 419, 750, 910};

bool isOK(int index, int key) {
    if (a[index] >= key) {
        return true;
    } else {
        return false;
    }
}

int binary_search(int key) {
    int ng = -1;
    int ok = (int)a.size();

    while (std::abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid, key)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    return ok;
}
 
int main(int argc, char *argv[])
{
    std::cout << binary_search(51) << std::endl;
    std::cout << binary_search(1) << std::endl;
    std::cout << binary_search(910) << std::endl;

    std::cout << binary_search(52) << std::endl;
    std::cout << binary_search(0) << std::endl;
    std::cout << binary_search(911) << std::endl;
    return 0;
}