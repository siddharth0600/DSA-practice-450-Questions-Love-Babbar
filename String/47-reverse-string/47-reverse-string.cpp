class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0;
        int len = s.size();
        char temp;
        for (int i = 0; i < len / 2; i++)
        {
            temp = s[i];
            s[i] = s[len - 1 - i];
            s[len - 1 - i] = temp;
        }
    }
};