//
// Created by Mishach on 24.01.2023.
//
#include <iostream>
#include "Encryption.hpp"

namespace en {
    Encryption::Encryption(std::string message) {
        _message = message;
        sizeOfString = countWords();
        generateFib(sizeOfString);  // переделать
    }


    Encryption::~Encryption() {}

    void Encryption::encode() {

    }

    void Encryption::decode() {

    }

    void Encryption::generateFib(const int &endIndex) {
        int tecNumber = 1;
        int nextNumber = 2;
        for (int i = 0; i < endIndex; i++){
            key.push_back(tecNumber);
            tecNumber = tecNumber + nextNumber;
            std::swap(tecNumber, nextNumber);
        }

    }

    int Encryption::countWords() {
        int counter = 0;
        for(char i : _message)
            if(i == ' ')
                counter += 1;
        counter += 1;
        return counter;
    }

    void Encryption::showKey() {
        for(int i : key)
            std::cout << i << " ";
    }

    void Encryption::writeKey() {
        int customKey;
        for(int i = 0; i < sizeOfString; i++){
            std::cin >> customKey;
            if (typeof(customKey) !=  )    // если тип является int то заменяем ключ.
                key[i] = customKey;
        }
    }
}