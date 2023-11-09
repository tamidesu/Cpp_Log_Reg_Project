#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to check if a user is logged in
bool IsLogged() {
    string username, password, UN, PW;

    // Prompt the user for username and password
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Open a file with the username as the filename
    ifstream read("C:\\Users\\bubuk\\" + username + ".txt");

    // Read the stored username and password from the file
    getline(read, UN);
    getline(read, PW);

    // Check if the entered username and password match the stored values
    if ((UN == username) && (PW == password)) {
        return true;  // Return true if the login is successful
    }
    else {
        return false;  // Return false if the login fails
    }
}

int main() {
    int choice{};
    cout << "Register: \nLogin: \nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        string username, password;
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        // Open a file with the selected username as the filename
        ofstream file;
        file.open("C:\\Users\\bubuk\\" + username + ".txt");

        // Write the username and password to the file
        file << username << endl << password;
        file.close();

        main();  // Recursive call to main to continue program execution
    }
    else if (choice == 2) {
        bool status = IsLogged();

        if (!status) {
            cout << "Wrong data, login failed!" << endl;
            system("PAUSE");
            return 0;  // Return 0 to indicate a failed login
        }
        else {
            cout << "Successfully logged in!" << endl;
            system("PAUSE");
            return 1;  // Return 1 to indicate a successful login
        }
    }
}
