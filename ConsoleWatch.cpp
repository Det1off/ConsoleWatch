#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    setlocale(0, "ru");

    while (true) {
        SYSTEMTIME now;
        GetSystemTime(&now);

        cout << "==========================================" << "\n";
        cout << "||                                      ||" << "\n";
        cout << "||              "
            << setw(2) << setfill('0') << now.wDay << "."
            << setw(2) << setfill('0') << now.wMonth << "."
            << now.wYear << "              ||" << "\n";
        cout << "||                                      ||" << "\n";
        cout << "||              "
            << setw(2) << setfill('0') << now.wHour << ":"
            << setw(2) << setfill('0') << now.wMinute << ":"
            << setw(2) << setfill('0') << now.wSecond << "                ||" << "\n";
        cout << "||                                      ||" << "\n";
        cout << "==========================================" << "\n";

        Sleep(1000);
        system("cls");
    }

    return 0;
}

