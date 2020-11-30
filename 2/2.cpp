using namespace std;
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "rus");
    string s1;
    string s2;
    string str;
    string str2;
    cin >> s1;
    cin >> s2;
    cin >> str;
    for (int i = 0; str[i]; i++)
    {
       str2= str.find(s1);
       cout << str2;
    }
    cout << str2;
    

}