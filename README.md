# C++ Login and Registration System

This is a simple C++ project that implements a basic login and registration system using file handling to store user credentials. The program allows users to register by selecting a username and password, which are then stored in a text file. Users can also log in by providing the correct credentials.

## Features

- **User Registration**: Users can create a new account by providing a username and password. The credentials are stored in a text file named after the username.
- **User Login**: Users can log in by entering their username and password. The program checks the credentials against the stored values in the respective text file.
- **File Handling**: User credentials are stored in plain text files.

## How It Works

1. **Registration**: 
   - The user is prompted to select a username and password.
   - The credentials are stored in a text file named `<username>.txt` in the specified directory.

2. **Login**:
   - The user is prompted to enter their username and password.
   - The program reads the corresponding `<username>.txt` file and checks if the entered credentials match the stored ones.
   - If the credentials match, the user is successfully logged in. Otherwise, the login fails.

## Code Structure

- **main()**: The entry point of the program. It offers the user the option to register or log in.
- **IsLogged()**: A function that handles the login process by checking the user's credentials against the stored values.

## Prerequisites

- **C++ Compiler**: Ensure you have a C++ compiler installed on your system.
- **File System Access**: The program writes to and reads from the file system. Make sure the specified directory (`C:\\Users\\bubuk\\`) exists or modify the path in the code to match your setup.

## How to Run

1. **Compile the Program**: Use a C++ compiler to compile the `Cpp_Log_Reg_Project.cpp` file.
   ```bash
   g++ Cpp_Log_Reg_Project.cpp -o LoginRegistration
    ```
2. **Run the Executable:**
  ```bash
  ./LoginRegistration
  ```
3. **Follow the Prompts:**
   * Choose to register or log in.
   * If registering, provide a username and password.
   * If logging in, enter the correct credentials to access the system.
  
## Important Notes
* **File Path:** The current code stores user credentials in **'C:\\Users\\bubuk\\'**. Ensure this path exists on your system or modify the code to point to an existing directory.

  
* **Security:** This implementation stores passwords in plain text files, which is not secure for real-world applications. Consider using encryption or a more secure method for handling user credentials if adapting this project for practical use.
