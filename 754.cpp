#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    std::vector<std::string> v;

    for (int i = 0; i < s.size() - 2; i++) {
        v.push_back(s.substr(i, 3));
    }

    int v_min = 1000000;

    for (int i = 0; i < v.size(); i++) {
        int value = std::abs(std::stoi(v[i]) - 753);
        if (value < v_min){
            v_min = value; 
        }
    }

    std::cout << v_min << std::endl;

    return 0;
}