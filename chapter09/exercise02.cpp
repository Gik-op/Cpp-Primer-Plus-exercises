// static.cpp -- using a static local variable
#include <iostream>

// function prototype
void strcount(const std::string &str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    getline(cin,input);
    while (input[0]!='\0')
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin,input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string &str)
{
    using namespace std;
    static int total = 0;
    int count;

    cout << "\"" << str <<"\" contains ";
    count=str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}