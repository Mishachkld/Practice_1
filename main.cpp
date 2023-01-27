#include <iostream>
#include <set>
#include "Encryption.hpp"

int main() {
    std::string str;
    std::getline(std::cin, str);
    en::Encryption myString(str);
    myString.showKey();
    return 0;
}

