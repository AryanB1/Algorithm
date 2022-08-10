#include "connector.h"
#include <iostream>
#include <string>
#include <random>
std::string encrypt(std::string& encryption_message) {
    //Stores individual letters of the message needing to be encrypted
    // char encryption_array[encryption_message.length()+1];
    //Adds the letters in encryption_message to the encryption_array
    // strcpy(encryption_array, encryption_message.c_str());
    //Stores original length of encryption_message
    int len_original = encryption_message.length();
    //empties the string of encryption_message
    std::string decryption_key;
    //Key to unlock encrypted message, is a randomly generated integer;
    std::random_device random;   // non-deterministic generator
    std::mt19937 gen(random());  // to seed mersenne twister.
    std::uniform_int_distribution<int> dist(1000000, 9000000); // distribute results between 1 and 6 inclusive.
    //Loops through to the end of the size of the original encryption_message
    for (int i = 0; i < len_original; i++) {
        long int changing = int(dist(gen));
        char useful_data;
        if (std::isspace(encryption_message[i])) {
            useful_data = 32;
        } else {
            useful_data = encryption_message[i];
        }
        string_stream(changing, decryption_key);
        changing *= useful_data;
        if(changing % 2 == 0) {
            changing += 1513;
        }
        else{
            changing -= 1219;
        }
        string_stream(changing, encryption_message);
    }
    decryption_key.pop_back();
    encryption_message.pop_back();
    encryption_message.erase(0, len_original);
    std::cout << "Here is your decryption key: " << decryption_key << std::endl;
   // std::cout << "decrypted: " << decrypt(encryption_message, decryption_key) << std::endl;
    return encryption_message;
};
//6709636_3170830_7998706_4017021_3278257_7812033_5617514_1705240_5080730_3920803_8132955_3797707_6179162_1585754_5337283_6130866_1444729_2208050_8639912
//930402858_443916200_341278122_291903526_264446065_333313408_823902053_220544373_738399426_264000736_347006080_265839490_947471506_67658837_345144301_931891632_116541473_285574466_1267187093