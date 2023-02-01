#include<iostream>
#include <string>

using namespace std;

void replaceFunc(char str[], char a) {
    int size = 0;
    for(int i = 0; str[i] != '\0' ; i++)
    {
		size++;
    }
	for(int i = 0; i < size; i++) {
		if(i == 0)	{
			str[i] = a;
        }
        if(i == size-1) {
			str[i] = a;
        }
	}
    cout << str << " -posle preobrazovaniya";
    delete[] str;
}

int main() {
	char *str = new char[40];
	char a;
	
	cout << "vvedite stroku i zatem cherez probel simvol ";
	cin >> str >> a;
    
    replaceFunc(str, a);
    
	return 1;
}
