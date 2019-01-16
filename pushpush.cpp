#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    /*
    std::vector<int> b;
    for (int i = 0; i < n; i++) {
        int temp = a[i]; 
        b.push_back(a[i]);
        std::reverse(b.begin(), b.end());
    }
    
    for (int i = 0; i < b.size(); i++) {
        std::cout << b[i] << " ";
    }
    */

    std::vector<int> b(n);
    for (int i = 0; i < n; i++) {
        if (n % 2 == 0) {
            if (i % 2 == 0) {
                b[n/2+i/2] = a[i];
            } else {
                b[n/2-1-i/2] = a[i];
            }
        } else {
            if (i == 0) {
                b[n/2] = a[i];
            } else if (i % 2 == 0) {
                b[n/2-i/2] = a[i];
            } else {
                b[n/2+1+i/2] = a[i];
            }
        }
    }

    for (int i = 0; i < b.size(); i++) {
        std::cout << b[i] << " ";
    }
    return 0;
}