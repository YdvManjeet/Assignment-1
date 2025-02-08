#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('a' - 'A');
    return ch;
}

bool isPalindrome(const string &str)
{
    string filtered = "";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            filtered += toLowerCase(str[i]);
    }

    int left = 0, right = filtered.size() - 1;
    while (left < right)
    {
        if (filtered[left] != filtered[right])
            return false;
        left++;
        right--;
    }
    return true;
}

void countCharacterFrequency(const string &str)
{
    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = toLowerCase(str[i]);
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;
    }

    cout << "Character Frequency:\n";
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            cout << "'" << char(i + 'a') << "' appears " << freq[i] << " times\n";
    }
}

string replaceVowels(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = toLowerCase(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            str[i] = '*';
        }
    }
    return str;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is NOT a palindrome.\n";

    countCharacterFrequency(input);

    string modifiedString = replaceVowels(input);
    cout << "String after replacing vowels with '*': " << modifiedString << endl;

    return 0;
}
