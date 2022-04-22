#include <iostream>
#include <algorithm>
using namespace std;

class ProfundidadArbol
{
private:
    struct Node
    {

        // Los miembro son públicos:
        Node *left;
        Node *right;
    };

public:
    int
    GetDeep(Node *ptr);
};

int ProfundidadArbol::GetDeep(Node *ptr)
{
    if (ptr == NULL)
        return 0;
    else
    {
        int l = GetDeep(ptr->left) + 1;
        int r = GetDeep(ptr->right) + 1;
        return max(l, r);
    }
}
