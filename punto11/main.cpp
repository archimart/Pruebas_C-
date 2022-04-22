#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename Temp>
void ShowVector(vector<Temp> &vectorTemplate)
{
    for (const auto &item : vectorTemplate)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> vectorString = {"hortelano", "del", "perro", "El"};

    for (auto &item : vectorString)
    {
        sort(item.begin(), item.end());
    }
    ShowVector(vectorString);
    cin.get();
    return 0;
}