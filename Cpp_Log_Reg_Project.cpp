#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLogged() {
    string username, password, UN, PW;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream read("C:\\Users\\bubuk\\" + username + ".txt");
    getline(read, UN);
    getline(read, PW);

    if ((UN == username) && (PW == password)) { return true; }
    else { return false; }
}

int main()
{
    int choice{};
    cout << "Register: \nLogin: \nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        string username, password;
        cout << "Select an username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file;
        file.open("C:\\Users\\bubuk\\" + username + ".txt");

        file << username << endl << password;
        file.close();

        main();
    }
    else if (choice == 2) {
        bool status = IsLogged();
        if (!status) {
            cout << "Wrong datas, false login!" << endl;
            system("PAUSE");
            return 0;
        }
        else {
            cout << "Succesfully logged in!" << endl;
            system("PAUSE");
            return 1;
        }
    }
}
