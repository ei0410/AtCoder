#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B;
    std::string S;

    std::cin >> A >> B;
    std::cin >> S;

    std::string a;
    std::string b;

    a = S.substr(0, A);
    b = S.substr(A+1, S.size()-(A+1));

    bool a_flag = false;
    bool haihun = false;
    bool b_flag = false;

    if (std::all_of(a.cbegin(), a.cend(), isdigit)) {
        a_flag = true;
    }

    std::string str = "-";
    if (S.substr(A, 1) == str) { 
        haihun = true;
    }

    if (std::all_of(b.cbegin(), b.cend(), isdigit)) {
        b_flag = true;
    }

    if (a_flag && haihun && b_flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}