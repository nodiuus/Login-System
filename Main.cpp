#include <iomanip>
#include <iostream>
#include <conio.h>
#include <time.h> 

#include "Functions.h"

int main()
{
    static int      Choice;
    static string   Username;
    static string   Password;

    cout << "Welcome to the Login Panel!" << endl;
    cout << "1: Register 2: Login" << endl;

    cin >> Choice;

    switch (Choice) {
        case 1:
            cout << "You have chosen to Register!" << endl;
            GeneralFunctions::Delay(500);
            system("cls");

            cout << "Username: ";
            cin >> Username;

            cout << "Password: ";
            cin >> Password;

            LoginFunctions::Register(Username, Password);

            system("cls");

            cout << "Welcome to the Login Panel!" << endl;
            cout << "1: Register 2: Login" << endl;
            cin >> Choice;
            if (Choice == 2) {
                LoginFunctions::LoginPage(Username, Password);
            }

            break;
        case 2:
            LoginFunctions::LoginPage(Username, Password);
            break;
    }
}