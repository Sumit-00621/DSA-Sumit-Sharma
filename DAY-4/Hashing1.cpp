#include <bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the String : ";
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int q;
    cout << "Enter Number of Queries : ";
    cin >> q;
    while (q--)
    {
        char character;
        cout << "Enter character : ";
        cin >> character;
        cout << hash[int(character - 'a')] << endl;
    }
}