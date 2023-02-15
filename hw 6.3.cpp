#include<iostream>
#include <string>
using namespace std;

int main() {
	char chars[6] = {'H','e','l','l','o', '\0'};

  	cout << "2 simvol [" << chars[1] << "] \n";
  	
  	int count = 0;
  	for (int i = 0; chars[i] != '\0'; i++)
    {
    	count++;
    }
    cout << "posledniy element [" << chars[count-1] << "] \n";
    
    char temp;
    temp = chars[1];
    chars[1] = chars[2];
    chars[2] = temp;
    cout << chars << " -pomenyal mestami 2 i 3 bukvi\n";
    
    string str = "Hello";
    int del;
    
    for (bool ext = false; ext != true;)
    {
	    cout << "kakoi simvol v slove " << str << " po schetu udalit? ";
	    cin >> del;
        if (del > str.length() || del < 0)
            cout << "error symbol, v stroke vsego " << str.length() << "\n";
        else if (del < 0 || del < 0)
            cout << "error symbol, v stroke vsego " << str.length() << "\n";
        else
        {
            del--;
            ext = true;
        }

    str = str.substr(0, del) + str.substr(del + 1);
    cout << str << " -posle udaleniya ";
	}
	
	delete[] chars;
}
