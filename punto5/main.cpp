#include <iostream>
// strlen
#include <cstring>
using namespace std;

int Z(const char *a, const char *b)
{
    int c = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    for (const char *d = a; d < a + c; ++d, ++b) // recorre ambos strings de la misma manera y compara caracter a caracter hasta que alguno de los dos llegue al final
    {
        if (*d != *b)
        {
            return *d - *b; // devuelve la diferencia de los dos caracteres en la misma posición en las cadenas a y b
        }
    }
    return 0;
}

int main()
{

    cout << "Z(\"Martin\", \"Diaz\") = " << Z("Martin", "Diaz") << endl;
    cin.get();
    return 0;
}