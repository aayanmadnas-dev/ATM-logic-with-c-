# 🏦 Bank of Indore – ATM Management System

A simple **ATM Management System written in C++** that demonstrates basic banking operations using **Object-Oriented Programming (OOP)** concepts such as classes, inheritance, and functions.

## 📌 Features

The program currently supports:

* 🔐 **Account Number & PIN Authentication**
* 💰 **Check Account Balance**
* 💸 **Withdraw Money**
* 💵 **Deposit Money**
* 🔑 **Change PIN**
* ⚠️ **Wrong Account/PIN Validation**
* ⚠️ **Wrong Current PIN Validation**

## 🛠️ Technologies Used

* **C++**
* **Object-Oriented Programming (OOP)**
* Classes
* Inheritance
* Conditional Statements
* User Input/Output

## 📂 Project Structure

```text
Bank-of-Indore/
│
├── ATM.cpp
└── README.md
```

## ▶️ How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/Bank-of-Indore.git
```

### 2. Open the Project

Open `ATM.cpp` in any C++ IDE or code editor, such as:

* Visual Studio Code
* Code::Blocks
* Dev-C++
* Visual Studio

### 3. Compile the Program

Using a terminal:

```bash
g++ ATM.cpp -o ATM
```

### 4. Run

```bash
./ATM
```

On Windows:

```bash
ATM.exe
```

## 🔐 Login

The current program uses predefined account credentials for testing.

```text
Account Number: 12345678
PIN: 1234
```

> **Note:** These credentials are hard-coded in the program and are only intended for demonstration/testing purposes.

## 🖥️ Program Flow

```text
WELCOME TO THE BANK OF INDORE
            │
            ▼
     Enter Account Number
            │
            ▼
          Enter PIN
            │
            ▼
      Verify Credentials
        /           \
       /             \
   Incorrect        Correct
      │                │
      ▼                ▼
 Wrong Details     ATM Menu
                       │
        ┌──────────────┼──────────────┐
        ▼              ▼              ▼
     Withdraw        Deposit       Check Balance
        │              │              │
        └──────────────┼──────────────┘
                       │
                       ▼
                  Change PIN
```

## 🧩 Classes Used

### `Balance`

Handles the account balance and displays the current balance.

```cpp
class Balance
{
public:
    int balance;

    void blc()
    {
        balance = 10000;
        cout << "YOUR BALANCE IS " << balance << " RUPEES.";
    }
};
```

### `withdraw`

Inherits from the `Balance` class and performs withdrawal operations.

```cpp
class withdraw : public Balance
```

### `Deposit`

Inherits from the `Balance` class and performs deposit operations.

```cpp
class Deposit : public Balance
```

### `Changepn`

Handles changing the user's PIN.

```cpp
class Changepn
```

## 📚 OOP Concepts Demonstrated

This project is mainly created for learning and demonstrates:

* **Classes & Objects**
* **Inheritance**
* **Public Data Members**
* **Member Functions**
* **Conditional Statements**
* **User Input Handling**

## 🚀 Future Improvements

The project can be improved by adding:

* [ ] Persistent account balance
* [ ] Multiple bank accounts
* [ ] Multiple users
* [ ] Transaction history
* [ ] Withdrawal limit
* [ ] Insufficient balance checking
* [ ] PIN masking
* [ ] PIN change persistence
* [ ] Account creation
* [ ] Logout option
* [ ] Better menu system
* [ ] File/database storage

## ⚠️ Current Limitations

This is a **beginner-level C++ project**, so some banking functionality is simulated.

For example, the balance is currently initialized to:

```cpp
balance = 10000;
```

inside the individual operations. Therefore, deposits and withdrawals do not yet maintain a permanent balance between different transactions.

Similarly, the changed PIN is not saved permanently after the program exits.

## 🎯 Purpose

This project was created as a **C++ learning project** to practice Object-Oriented Programming and build a simple real-world application based on an ATM/banking system.


⚠️ Disclaimer

This is an educational/demo project and is not intended for real banking transactions or secure financial applications.

👨‍💻 Author

Aayan Madnas

If you found this project useful, consider giving the repository a ⭐ on GitHub!
