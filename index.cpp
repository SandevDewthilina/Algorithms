#include <iostream>

using namespace std;

bool isPalindrome(string s)
{
    string temp = "";
    int len = s.length();
    for (int i = 0; i < s.length(); i++)
    {
        temp += s[len - 1 - i];
    }
    return temp == s;
}

bool pal(string s, int start, int end)
{

    if (start > end) 
    {
        return false;
    }

    string sub = s.substr(start, end);

    if (isPalindrome(sub))
    {
        return true;
    }

    if (sub[start] == sub[end])
    {
        pal(sub, start + 1, end - 1);
    } else {
        if(pal(sub, start+1, end)) {
            return true;
        }
        if(pal(sub, start, end-1)) {
            return true;
        }
        return false;
    }
    
}

int main()
{
    cout << pal("5a667665");
}