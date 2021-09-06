/**
 * @file main.cpp
 * @author Bakanov Vladislav
 * @brief Encoding byte sequence into ASN.1 format
 * @version 1.0
 * @date 2021-09-06
 */
#include "../inc/main.h"

using namespace std;


int main(int argc, char const *argv[])
{
    string str;         // input data
    string res = "04";  // result
    int out;            // output type selection flag
    
    File f;
    Tools t;

    printf("Enter file names in the form of 'input.txt output.txt' or '-' for console input.\n>");
    getline(cin,str);

    if (str.compare("-")==0)
    {
        printf("Enter data\n>");
        getline(cin,str);
        out = 1;
    }
    else if (str.find(' ') != -1)   // check for the number of files
    {
        f.getNameFile(str);
        str = f.readFile(f.input_file);
        out = 2;
    }
    else
    {
        printf("ERROR: the wrong command was entered.\n \
You can enter file names in the form of 'input.txt output.txt' or '-' for console input.\n");
        exit(EXIT_FAILURE);
    }

    if (!t.dataValid(str))
    {
        printf("ERROR: incorrect data\n");
        exit(EXIT_FAILURE);
    }

    res += t.getDataSize(str.length()/2);
    res += str;

    switch (out)
    {
    case 1:
        printf("Result: %s\n",res.c_str());
        break;
    
    case 2:
        f.writeFile(f.output_file,res);
        break;
    }
    
    return 0;
}
