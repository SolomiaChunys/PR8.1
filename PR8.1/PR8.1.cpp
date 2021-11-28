#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>


using namespace std;

bool Include(const char* str, const char* cs)
{
    bool b, r = true;

    for (int i = 0; cs[i] != '\0'; i++)
    {
        b = false;
        for (int j = 0; str[j] != '\0'; j++)
            if (cs[i] == str[j])
            {
                b = true;
                break;
            }
        r = r && b;
    }
    return r;
}

char* Change(char* str)
{
    if (strlen(str) < 5)
        return str;
    char* tmp = new char[strlen(str) * 2 / 5 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    int i = 0;
    while (str[i + 2] != 0)
    {
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
        {
            strcat(t, "**");
            t += 2;
            i += 5;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}

int main()
{
    char str[101];
    char cs[] = "while";
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (Include(str, cs))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    char* dest = new char[151];
    dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
