#include <iostream>
#include "Encryption.hpp"

int main() {
//    std::string str;
//    std::cin >> str;
    en::Encryption myString("My fker n1gga gfdgfd fdg dfgfgfdf gdfg df gfdgfdgddfg");
    myString.showKey();
    myString.writeKey();
    return 0;
}
