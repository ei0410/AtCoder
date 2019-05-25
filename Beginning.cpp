#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N1, N2, N3, N4;
    std::cin >> N1 >> N2 >> N3 >> N4;

    bool flag = false;
    if (N1 == 1 && N2 == 4 && N3 == 7 && N4 == 9) {
        flag = true;
    }
    if (N1 == 1 && N2 == 4 && N3 == 9 && N4 == 7) {
        flag = true;
    }
    if (N1 == 1 && N2 == 7 && N3 == 4 && N4 == 9) {
        flag = true;
    }
    if (N1 == 1 && N2 == 7 && N3 == 9 && N4 == 4) {
        flag = true;
    }
    if (N1 == 1 && N2 == 9 && N3 == 7 && N4 == 4) {
        flag = true;
    }
    if (N1 == 1 && N2 == 9 && N3 == 4 && N4 == 7) {
        flag = true;
    }
    if (N1 == 4 && N2 == 1 && N3 == 7 && N4 == 9) {
        flag = true;
    }
    if (N1 == 4 && N2 == 1 && N3 == 9 && N4 == 7) {
        flag = true;
    }
    if (N1 == 4 && N2 == 7 && N3 == 1 && N4 == 9) {
        flag = true;
    }
    if (N1 == 4 && N2 == 7 && N3 == 9 && N4 == 1) {
        flag = true;
    }
    if (N1 == 4 && N2 == 9 && N3 == 7 && N4 == 1) {
        flag = true;
    }
    if (N1 == 4 && N2 == 9 && N3 == 1 && N4 == 7) {
        flag = true;
    }
    if (N1 == 7 && N2 == 4 && N3 == 1 && N4 == 9) {
        flag = true;
    }
    if (N1 == 7 && N2 == 4 && N3 == 9 && N4 == 1) {
        flag = true;
    }
    if (N1 == 7 && N2 == 1 && N3 == 4 && N4 == 9) {
        flag = true;
    }
    if (N1 == 7 && N2 == 1 && N3 == 9 && N4 == 4) {
        flag = true;
    }
    if (N1 == 7 && N2 == 9 && N3 == 1 && N4 == 4) {
        flag = true;
    }
    if (N1 == 7 && N2 == 9 && N3 == 4 && N4 == 1) {
        flag = true;
    }
    if (N1 == 9 && N2 == 1 && N3 == 4 && N4 == 7) {
        flag = true;
    }
    if (N1 == 9 && N2 == 1 && N3 == 7 && N4 == 4) {
        flag = true;
    }
    if (N1 == 9 && N2 == 4 && N3 == 1 && N4 == 7) {
        flag = true;
    }
    if (N1 == 9 && N2 == 4 && N3 == 7 && N4 == 1) {
        flag = true;
    }
    if (N1 == 9 && N2 == 7 && N3 == 4 && N4 == 1) {
        flag = true;
    }
    if (N1 == 9 && N2 == 7 && N3 == 1 && N4 == 4) {
        flag = true;
    }

    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}