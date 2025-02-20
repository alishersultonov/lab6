#include <iostream>
using namespace std;

//Problem1a
/*
int main() {
    int total = 0;
    for (int i = 1; i <= 100; i++) {
        total += i;
    }
    cout << "Sum of first 100 natural numbers: " << total << endl;
    return 0;
}
*/


//Problem1b
/*
int main() {
    int n, total = 0, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        total += i;
        i++;
    }

    cout << "Sum: " << total << endl;
    return 0;
}
*/


//Problem2a
/*
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0, num = 2;

    cout << "First 10 prime numbers: ";
    while (count < 10) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
    return 0;
}
*/


//Problem2b
/*
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0, num = 2;

    cout << "First 10 prime numbers: ";
    while (count < 10) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
    return 0;
}
*/


//Problem3
/*
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Collatz sequence: " << n;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        cout << ", " << n;
    }
    cout << endl;
    return 0;
}
*/


//Problem4
/*
int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
*/


//Problem5
/*
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digits (right to left): ";
    while (n > 0) {
        cout << n % 10 << " ";
        n /= 10;
    }
    cout << endl;
    return 0;
}
*/


//Problem6
/*
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD: " << a << endl;
    return 0;
}
/*


//Problem7
/*
int main() {
    int sum = 0, count = 0, num;

    while (sum <= 100) {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        count++;
    }

    cout << "Sum exceeded 100! Total sum: " << sum << endl;
    cout << "Total numbers entered: " << count << endl;
    return 0;
}
*/


//Problem8
/*
#include <iostream>
using namespace std;

int main() {
    int balance = 500, amount;

    while (balance > 0) {
        cout << "Enter withdrawal amount (or 0 to cancel): ";
        cin >> amount;

        if (amount == 0) break;
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Remaining balance: $" << balance << endl;
        }
    }

    cout << "Transaction ended." << endl;
    return 0;
}
*/


//Problem9
/*
int main() {
    char input;

    do {
        cout << "Enter 'Y' or 'N': ";
        cin >> input;
        if (input != 'Y' && input != 'N')
            cout << "Invalid input!" << endl;
    } while (input != 'Y' && input != 'N');

    cout << "Accepted" << endl;
    return 0;
}
*/


//Problem10
/*
int main() {
    int choice;

    do {
        cout << "ATM Menu:\n1. Withdraw\n2. Deposit\n3. Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) cout << "Processing withdrawal...\n";
        else if (choice == 2) cout << "Processing deposit...\n";
        else if (choice == 3) cout << "Showing balance...\n";
        else if (choice != 4) cout << "Invalid choice!\n";
    } while (choice != 4);

    cout << "Goodbye!" << endl;
    return 0;
}
*/


//Problem11
/*
int main() {
    int choice, a, b;

    do {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        if (choice == 1) cout << "Result: " << a + b << endl;
        else if (choice == 2) cout << "Result: " << a - b << endl;
        else if (choice == 3) cout << "Result: " << a * b << endl;
        else if (choice != 4) cout << "Invalid choice!\n";
    } while (choice != 4);

    cout << "Goodbye!" << endl;
    return 0;
}
*/


//Problem12
/*
int main() {
    string password = "1234", input;
    int attempts = 0;

    do {
        cout << "Enter password: ";
        cin >> input;
        attempts++;

        if (input == password) {
            cout << "Access Granted!" << endl;
            return 0;
        } else {
            cout << "Incorrect Password!" << endl;
        }
    } while (attempts < 3);

    cout << "Too many attempts! Access Denied." << endl;
    return 0;
}
*/


//Problem13
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1, guess;

    do {
        cout << "Guess the number (1-100): ";
        cin >> guess;

        if (guess > number) cout << "Too high!" << endl;
        else if (guess < number) cout << "Too low!" << endl;
    } while (guess != number);

    cout << "Correct!" << endl;
    return 0;
}
