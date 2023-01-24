//
// Created by Mishach on 24.01.2023.
//


#include <string>
#include <vector>

#pragma once

namespace en {
    class Encryption {
    public:
        Encryption(std::string message);
        ~Encryption();
        void encode();
        void decode();
        void showKey();
        void writeKey();

    private:
        std::string _message;
        std::vector<int> key;
        int sizeOfString;
        // Function
        void generateFib(const int &endIndex);
        int countWords();



    };
} // en
