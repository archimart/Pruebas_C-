#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;
class A
{
public:
    void Set(int, int, int, int) { cout << "usando Set de A" << endl; }
    void Set(int) { cout << "usando Set de B" << endl; }
};

class B : public A
{
};

int main(int argc, char *argv[])
{
    B b;
    b.Set(1);
    b.Set(1, 2, 3, 4);
}
