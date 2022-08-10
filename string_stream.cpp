//preprocessors that are needed
#include "connector.h"
#include <iostream>
#include <string>
#include <sstream>
std::string string_stream(int value, std::string& final_message) {
    std::string f_message;
    std::string n_message;
    std::stringstream message_f;
    message_f << value;
    message_f >> n_message;
    n_message.insert(n_message.length(), "_");
    final_message.insert(final_message.size(), n_message);
    return final_message;
};
