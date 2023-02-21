#include <iostream>
#include <string>

using namespace std;

void change(string& str, char ch);
void my_delete(string& str);

int main()
{
    string str;
    char ch;

    cout << "\t #1:\nEnter text:\n";
    getline(cin, str);
    cout << "Enter modifier:\n";
    (cin >> ch).get();
    change(str, ch);
    cout << "Chenged string:\n" << str << endl;

    cout << "\t#2:\nEnter some text:\n";
    getline(cin, str);
    my_delete(str);
    cout << "Cleaned string\n" << str << endl;
    cout << "Lenght of string = " << str.length() << endl;

    return 0;
}

void change(string& str, char ch)
{
    str[0] = ch;
    str[str.length() - 1] = ch;
}

void my_delete(string& str)
{
    str = (str.substr(str.find_first_not_of(' '))).substr(0, (str.substr(str.find_first_not_of(' '))).find_last_not_of(' ') + 1);
}
