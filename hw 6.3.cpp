#include<iostream>
#include <string>
using namespace std;

int main() {
	char chars[6] = {'H','e','l','l','o', '\0'};

  	cout << "2 simvol [" << chars[1] << "] ";
  	
  	int count = 0;
  	for (int i = 0; chars[i] != '\0'; i++)
    {
    	count++;
    }
    cout << "posledniy element [" << chars[count-1] << "] ";
    
    char temp;
    temp = chars[1];
    chars[1] = chars[2];
    chars[2] = temp;
    cout << chars << " -pomenyal mestami 2 i 3 bukvi";
}
