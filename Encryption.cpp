//
// Created by Mishach on 24.01.2023.
//
#include "Encryption.hpp"

namespace en {
    Encryption::Encryption(std::string message) {
        _message = message;
        sizeOfString = countWords();
        encode();   // переделать
    }


    Encryption::~Encryption() {}

    void Encryption::encode() {
        generateFib();
        writeKey();
    }

    void Encryption::decode() {

    }

    void Encryption::generateFib() {
        int tecNumber = 1;
        int nextNumber = 2;
        for (int i = 0; i < sizeOfString; i++){
            fibSequence.push_back(tecNumber);
            tecNumber = tecNumber + nextNumber;
            std::swap(tecNumber, nextNumber);
        }

    }
    //===============================(＠＾◡＾)================================\\

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
            key.push_back(customKey);
        }
        if(!isFib())
            outError();
    }

    bool Encryption::isFib() {
        bool result = true;
        std::vector<int>sortedKey;
        sortedKey = key;
        std::sort(sortedKey.begin(), sortedKey.end());
        for (int i = 0; i < sizeOfString; ++i) {
            if(sortedKey[i] != fibSequence[i])
                result = false;
        }
        return result;
    }

    void Encryption::outError() {
        std::cout << std::endl << "Errorrrrrrrrrr...";
    }


}