#include <bits/stdc++.h>

int main(int argc, char *argv[]) 
{
    std::string s;
    std::cin >> s;

    std::cout << "2018" + s.erase(0, 4);
    return 0;
}