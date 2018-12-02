#include <bits/stdc++.h>

int main(int argc, char *argv[]) 
{
    std::string s;
    std::cin >> s;

    std::string divide[4] ={"dream", "dreamer", "erase", "eraser"};

    std::reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++) {
        reverse(divide[i].begin(), divide[i].end());
    }

    bool can = true;
    for (int i = 0; i < s.size();) {
        bool can2 = false;
        for (int j = 0; j < 4; j++) {
            std::string d = divide[j];
            if (s.substr(i, d.size()) == d) {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2) {
            can = false;
            break;
        }
    }

    if (can) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }

    return 0;
}