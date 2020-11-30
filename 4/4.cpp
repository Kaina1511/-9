using namespace std;
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 6;
    char a[n] = {'a', 'e','i', 'o','u', 'y' };
    string s;
    int k;
    cout << "Введите строку строчными английскими буквами: " << endl;
    cin >> s;
    k = 0;
    for (int i = 0; s[i]; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i] == a[j])
                k++;
        }
    }
    if (k)
        cout << "Кол-во гласных букв: " << k << endl;
    else
        cout << "В данной строке нет гласных букв...";
}
