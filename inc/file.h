/**
 * @file file.h
 * @author Bakanov Vladislav
 * @brief File handling
 * @version 1.0
 * @date 2021-09-06
 */

#include <fstream>
#include <string>
#include <iostream>

using namespace std;

#pragma once

class File
{
private:
    
public:

    static string input_file;   // input file name
    static string output_file;  // output file name

    /**
     * @brief Reading an input file
     * @param path file address
     * @return file content 
     */
    string readFile(const string& path);

    /**
     * @brief Defines the name of the input and output file
     * @param data line with the input and output file
     */
    void getNameFile(const string& data);

    /**
     * @brief Writing data to a file
     * @param path file address
     * @param str data
     */
    void writeFile(const string& path, const string& str);
    
};


