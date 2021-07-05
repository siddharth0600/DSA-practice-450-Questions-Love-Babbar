// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        char a;
        stack<char> s;
        for (int i = 0; i < x.length(); i++)
        {
            char test;
            test = x[i];

            if (test == '{' || test == '(' || test == '[')
            {
                s.push(test);
            }
            else if (test == '}' || test == ')' || test == ']')
            {
                if (s.empty())
                {
                    return false;
                }
                switch (test)
                {
                case ')':
                    a = s.top();
                    s.pop();
                    if (a == '{' || a == '[')
                        return false;
                    break;

                case '}':
                    a = s.top();
                    s.pop();
                    if (a == '[' || a == '(')
                        return false;
                    break;

                case ']':
                    a = s.top();
                    s.pop();
                    if (a == '{' || a == '(')
                        return false;
                    break;
                }
            }
        }
        return (s.empty());
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
} //} Driver Code Ends
