//
// Created by abhar on 2022-08-01.
//
#include "connector.h"
#include <ctime>
#include <iostream>
int time_restriction(int message, int key) {
    time_t curr_time;
    curr_time = time(nullptr);
    char *tm = ctime(&curr_time);
    std::string x;
    x = tm;
    std::string y;
    y = x.substr(x.size()-17, x.size()-17);
    y = y.substr(0, 2);
    x = x.substr(x.size() -5);
    char z = y[0];
    int a = z;
    std::cout << "Today is : " << y << std::endl;
    std::cout << x << std::endl;
};