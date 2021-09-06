#include "../inc/file.h"

string File::input_file;
string File::output_file;

string File::readFile(const string& path) 
{
    ifstream input(path);
    if (!input.is_open()) {
        cerr << "Could not open the file '" << path << "'" << endl;
        exit(EXIT_FAILURE);
    }
    return string((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
}

void File::writeFile(const string& path, const string& str)
{
    ofstream output(path);
    output<< str;
    output.close();
    printf("Data saved to a file %s\n",output_file.c_str());
}

void File::getNameFile(const string& data)
{
    int space = data.find(' ');
    input_file.assign(data,0,space);
    output_file.assign(data,space +1,data.length());
}