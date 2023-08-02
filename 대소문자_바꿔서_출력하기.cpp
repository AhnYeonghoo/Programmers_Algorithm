#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string answer;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) >= 'a' && str.at(i) <= 'z')
        {
            answer += str.at(i) - 32;
        } 
        else
            answer += str.at(i) + 32;
    } 
    cout << answer << endl;

    return 0;
}