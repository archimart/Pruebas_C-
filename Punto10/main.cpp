#include <vector>
#include <string>

// String
#include <cstring>
#include <iostream>
// TStringList
using namespace std;

int main()
{

    string str = "El perro del hortelano", cadena = "";
    int str_i = str.size();
    for (int i = str.size(); i > 0; i--)
    {
        if (i == 1)
        {
            cadena += str.substr(0, str_i);
        }
        else if (str[i] == ' ')
        {
            cadena += str.substr(i, str_i - i) + " ";
            str_i = i;
        }
    }
    cout << cadena << endl;
    cin.get();
    return 0;
}
