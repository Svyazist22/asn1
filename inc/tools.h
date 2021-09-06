/**
 * @file tools.h
 * @author Bakanov Vladislav
 * @brief Useful tools
 * @version 1.0
 * @date 2021-09-06

 */

#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

#pragma once

class Tools
{
private:
   
public:

    /**
     * @brief Сonversion to hexadecimal notation
     * @param num number in decimal notation
     * @return number in hexadecimal notation 
     */
    string convert(int num);

    /**
     * @brief Get the data size in hexadecimal notation
     * @param len number in decimal notation
     * @return size in hexadecimal notation  
     */
    string getDataSize(int len);

    /**
     * @brief Deleting unnecessary information and verifying information 
     * @param str_data data
     * @return true - the data is correct, else - false
     */
    bool dataValid(string &str_data);


};

