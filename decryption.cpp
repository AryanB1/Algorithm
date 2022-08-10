#include "connector.h"
#include <string>
std::string decrypt(std::string& decryption_message, std::string& decryption_key) {
    decryption_message.insert(decryption_message.size(), "_");
    decryption_key.insert(decryption_key.size(), "_");
    std::string returnable_string = "";
    while(!decryption_message.empty()) {
        std::string encrypted;
        std::string key;
        long int i_encrypted;
        long int i_key;
        encrypted = decryption_message.substr(0, decryption_message.find('_'));
        key = decryption_key.substr(0, decryption_key.find('_'));
        i_encrypted = std::stoi(encrypted);
        i_key = std::stoi(key);
        if(i_key % 2 == 0) {
            i_encrypted -= 1513;
        }
        else{
            i_encrypted += 1219;
        }
        decryption_message.erase(0, encrypted.size() + 1);
        decryption_key.erase(0, key.size() + 1);
        unsigned char addable_char = i_encrypted / i_key;
        returnable_string.push_back(addable_char);
    }
    decryption_message = returnable_string;
    return decryption_message;
}
//6230904_5242940_1315497_1762598_1280364_3039531_8025501_3461004_2517244_5201451_3089567_5312864_6444114_2333955_1834257_8342909_3806691_3552367_4293334
//648014026_550508710_42095914_192123192_154924054_97265002_882805120_335717398_274379606_525346541_98866154_557850730_741073120_74686570_177922919_951091636_460609601_344579589_472266750