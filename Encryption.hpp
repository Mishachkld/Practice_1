//
// Created by Mishach on 24.01.2023.
//


#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#pragma once

namespace en {
    class Encryption {
    public:
        Encryption(std::string message);
        ~Encryption();
        void encode();
        void decode();
        void showKey();

    private:
        std::string _message;
        std::vector<int> fibSequence;
        std::vector<int> key;
        int sizeOfString;
        // Function
        void generateFib();
        int countWords();
        bool isFib();
        void outError();
        void writeKey();




    };
} // en
