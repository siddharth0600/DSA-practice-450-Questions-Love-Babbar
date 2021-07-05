// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to check if two strings are rotations of each other or not.
    int isSubstring(string s3, string s4)
    {
        int M = s3.length();
        int N = s4.length();

        /* A loop to slide pat[] one by one */
        for (int i = 0; i <= N - M; i++)
        {
            int j;

            for (j = 0; j < M; j++)
                if (s4[i + j] != s3[j])
                    break;

            if (j == M)
                return i;
        }

        return -1;
    }

    bool areRotations(string s1, string s2)
    {
        // Your code here
        if (s1.length() != s2.length())
            return false;
        string conc = s1 + s1;
        if (isSubstring(s2, conc) == -1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends