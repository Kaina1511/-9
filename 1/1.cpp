using namespace std;
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 1;
    char s[n] = { 'л' };
    const int l = 15;
    char c[l] = "Колледж";
    cout << "Строка - Колледж\n";
    cout << "Символ - л\n";
    int k = 0;
    for (int i = 0; c[i]; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[i] == s[j])
                k++;
        }
    }
    if (k)
        cout << "Данных символов в данной строке = " << k << endl;
    else
        cout << "Данных символов не найдено...";
}

