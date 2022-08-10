#include <string>
#ifndef MAIN_CPP_CONNECTOR_H
#define MAIN_CPP_CONNECTOR_H
std::string string_stream(int value, std::string& final_message);
std::string encrypt(std::string& encryption_message);
std::string decrypt(std::string& decryption_message, std::string& decryption_key);
int time_restriction(int message, int key);
#endif