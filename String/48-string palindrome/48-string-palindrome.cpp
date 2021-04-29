// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>

// } Driver Code Ends
//User function Template for C

int isPlaindrome(char S[])
{
    // Your code goes here
    int i;
    int len = strlen(S);
    char temp;
    for (i = 0; i < len / 2; i++)
    {
        if (S[i] != S[len - 1 - i])
            return 0;
    }
    return 1;
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100000];
        scanf("%s", &s);
        ;

        printf("%d\n", isPlaindrome(s));
    }

    return 0;
} // } Driver Code Ends