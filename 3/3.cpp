using namespace std;
#include <iostream>
int main()
{
    setlocale(LC_ALL, "rus");
    char s[1024];
    char x[1024] = { 0 };
    cout << "Введите строку с содержанием цифр и букв на английском языке!: "<<endl;
    cin >> s;
    char* a = x;
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit((unsigned char)s[i]))
            *a++ = s[i];
    }
    cout << "Строка после удаления цифр: " << x;
}
