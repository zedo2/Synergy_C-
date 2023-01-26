#include<iostream>
#include <string>
using namespace std;

int main() {
	char chars[100];

  	cout << "vvedite slovo \n";
  	cin  >> chars;
  	string str = chars;
  	
    cout << "slovo [" << chars << "] \n";
    str = str.substr(1);
    cout << str << " udalil 1 simvol\n";
    
    char chars2[100];
  	cout << "vvedite slovo \n";
  	cin  >> chars2;
  	string str2 = chars2;
    int leng=str2.length();
    int iter = leng-1;
	for(int i=iter;i>=0;i--)
	   cout<<str2[i];		
}
