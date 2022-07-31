#pragma once
#include <iomanip>
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h> 
#include <vector>
#include <array>

#define cout std::cout
#define endl std::endl
#define vector std::vector
#define string std::string
#define cin std::cin

namespace GeneralFunctions {
    void Delay(int ms)
    {
        clock_t timeDelay = ms + clock();
        while (timeDelay > clock());
    }
}

namespace LoginFunctions {
    vector <string> UsernameDatabase = {"nisan", "n"};
    vector <string> PasswordDatabase = {"password", "o"};

    void Login(string Username, string Password) {
        for (int i = 0; i < UsernameDatabase.size(); ++i) {
            if (Username == UsernameDatabase[i] && Password == PasswordDatabase[i]) {
                cout << "Correct Login";
            }
        }
    }

    void Register(string Username, string Password) {
        UsernameDatabase.push_back(Username);
        PasswordDatabase.push_back(Password);
    }

    void LoginPage(string Username, string Password) {
        cout << "You have chosen to Login!" << endl;
        GeneralFunctions::Delay(500);
        system("cls");

        cout << "Username: ";
        cin >> Username;

        cout << "Password: ";
        cin >> Password;
        LoginFunctions::Login(Username, Password);
    }
}