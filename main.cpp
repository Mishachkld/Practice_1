#include <iostream>
#include "Encryption.hpp"

int main() {
    std::string str;
    std::getline(std::cin, str);

    en::Encryption myString(str);
    myString.showKey();
    myString.writeKey();
    return 0;
}

