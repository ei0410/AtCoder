#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    int left = 20;
    int right = 36; 

    int count = 0;
    while (right - left > 1) {
        int mid = (right + left) / 2;

        count++;
        if (N == mid) {
            break;
        } else if (N > mid) {
            left = mid;
        } else if (N < mid) {
            right = mid;
        }

        if (count >= 100) {
            break;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}