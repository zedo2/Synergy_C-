#include <iostream>

using namespace std;

int main()
{
    string buff, list[7] = { "Frolov", "Babov", "Klinov", "Semenov", "Vulgakov", "Chubnov", "Herkovlsky" };


    cout << "1st symbol to ASCII\t" << "Last Name\n";
    for (int i = 0; i < 7; i++)
        cout << "\t\t" << (int)list[i][0] << "\t" << list[i] << endl;


    for (int i = 1; i < 7; i++) {
        for (int j = i; j > 0; j--) {
            if ((int)list[j][0] < (int)list[j - 1][0])
                swap(list[j], list[j - 1]);
        }
    }


    cout << "Formatted list:\n1st symbol to ASCII\t" << "Last Name\n";
    for (int i = 0; i < 7; i++)
        cout << "\t\t" << (int)list[i][0] << "\t" << list[i] << endl;

    return 0;
}
