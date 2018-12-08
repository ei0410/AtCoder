#include <bits/stdc++.h>

int main(int argc, char *argv[]) 
{
    int N;
    std::cin >> N;

    int res = N;
    
    for (int i = 0; i <= N; i++) {
        int cc = 0;
        int t = i;
        while(t > 0) {
            cc+=t%6;
            t/=6;
        }
        t=N-i;
        while(t > 0) {
            cc+=t%9;
            t/=9;
        }
        if (res > cc) {
            res = cc;
        }
    }

    std::cout << res << std::endl;

    return 0;
}