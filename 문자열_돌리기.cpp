#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (const auto& a : str)
    {
        cout << a << endl;
    }

    return 0;
}