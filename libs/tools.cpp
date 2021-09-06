#include "../inc/tools.h"


string Tools::convert(int num)
{
    string res;

    while(num > 0)
    {
        string d = "0123456789ABCDEF";
        res = d[num % 16] + res;
        num /= 16;
    }
    if (res.length()%2 != 0)
    {
        res.insert(0,"0");
    }

    return res;
}

string Tools::getDataSize(int len)
{
    string size;

    if (len < 128)
    {
        size += convert(len);
    }
    else
    {
        size += convert(128+convert(len).length()/2);
        size += convert(len);
    }

    return size;
}

bool Tools::dataValid(string &str_data)
{
    str_data.erase(remove(str_data.begin(), str_data.end(), ' '), str_data.end());      // delete space
    str_data.erase(remove(str_data.begin(), str_data.end(), '\n'), str_data.end());     // delete enter
    if ((str_data.length() % 2 != 0) || (str_data.empty()))                                 
    {
        return false;
    }
    else
    {
        return true;
    }

}
