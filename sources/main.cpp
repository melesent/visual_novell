#include <iostream>
#include <clocale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Привет, дорогой друг!\n";
    cin.get();

    return 0;
}
