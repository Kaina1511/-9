using namespace std;
#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "rus");
    string s, s0;
    int n = 0, k = 0;
    cout << "Введите строку: ";
    cin >> s;
    cout << "Введите подстроку: ";
    cin >> s0;
    while ((k = s.find(s0, k)) != s.npos) 
    {
        ++n;
        ++k;
    }
    cout << "Подстрока " << s0 << " в строке " << s << " содержит " << n << " вхождений";
}
