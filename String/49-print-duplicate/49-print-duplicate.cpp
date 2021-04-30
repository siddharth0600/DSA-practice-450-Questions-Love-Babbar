#include <bits/stdc++.h>
using namespace std;

int main()
{
    string test = "Siddharth";
    map<char, int> myMap;
    for (int i = 0; i < test.length(); i++)
    {
        myMap[test[i]]++;
    }

    for (auto it : myMap)
    {
        if (it.second > 1)
        {
            cout << it.first << "   Count:" << it.second << "\n";
        }
    }

    return 0;
}