//preprocessors that are needed
#include "connector.h"
#include <iostream>
#include <string>
//Declaring main function
int main() {
    std::string input;
    std::string message;
    std::string d_message;
    //Creating a while true loop to ensure that I get a valid input
    while(true) {
        std::cout << "Please enter the character e if you have a message to encrypt, or the character d if you have a message to decrypt" << std::endl;
       // getline gets a raw string. This is needed, since without it only one word can be processed
        std::getline(std::cin, input);
        //Basic input, output stuff
        if (input == "e" || input == "E") {
            std::cout << "Please enter the message you wish to encrypt:" << std::endl;
            std::getline(std::cin, message);
            encrypt(message);
            std::cout << "Here is your encrypted message: " << message << std::endl;
            break;
        } else if (input == "d" || input == "D") {
            std::cout << "Please enter the message you wish to decrypt:" << std::endl;
            std::getline(std::cin, message);
            std::cout << "Please enter your decryption key:" << std::endl;
            std::getline(std::cin, d_message);
            decrypt(message, d_message);
            std::cout << "Here is your decrypted message: " << message << std::endl;
            break;
        } else {
            std::cout << "invalid input!" << std::endl;
        }
    }
    return 0;
}