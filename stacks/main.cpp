#include <iostream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

const int MAX = 10;
string stack[MAX] = { "Franklyn", "Eugene", "Daniella", "Dolly" };
int top = 3;

bool isValidName(const string& name) {
    for (char c : name) {
        if (!isalpha(c) && c != ' ') {
            return false;
        }
    }
    return true;
}

void displayStack(const string& title) {
    cout << "\n" << title << endl;
    if (top == -1) {
        cout << "Stack is empty.\n";
    } else {
        for (int i = 0; i <= top; i++) {
            cout << i + 1 << ". " << stack[i] << endl;
        }
    }
}

void push(const string& name) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow! Cannot push " << name << endl;
    } else {
        top++;
        stack[top] = name;
        cout << "Pushed " << name << " onto the stack.\n";
    }
    displayStack("Stack after push:");
}

void popAt(int index) {
    if (top == -1) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else if (index < 0 || index > top) {
        cout << "Invalid position. Choose between 1 and " << top + 1 << ".\n";
    } else {
        cout << "Popped " << stack[index] << " from position " << index + 1 << ".\n";
        for (int i = index; i < top; i++) {
            stack[i] = stack[i + 1];
        }
        top--;
    }
    displayStack("Stack after pop:");
}


void peek() {
    if (top == -1) {
        cout << "Stack is empty. Nothing to peek.\n";
    } else {
        cout << "Top of the stack: " << stack[top] << endl;
    }
    displayStack("Stack after peek:");
}

int getValidatedInt(const string& prompt, int min, int max) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;

        if (cin.fail() || number < min || number > max) {
            cout << "Invalid input. Please enter a number between " << min << " and " << max << ".\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return number;
        }
    }
}

int main() {
    int numPush, numPop, pos;
    string name;
    char choice;

    displayStack("Original Stack:");

    numPush = getValidatedInt("\nHow many names do you want to push? ", 0, MAX - 1 - top);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    for (int i = 0; i < numPush; i++) {
        while (true) {
            cout << "Enter name " << i + 1 << ": ";
            getline(cin, name);
            if (isValidName(name)) {
                push(name);
                break;
            } else {
                cout << "Invalid name! Use letters and spaces only.\n";
            }
        }
    }

    numPop = getValidatedInt("\nHow many names do you want to pop (from any position)? ", 0, top + 1);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    for (int i = 0; i < numPop; i++) {
        pos = getValidatedInt("Enter the position (1 to " + to_string(top + 1) + ") to pop from: ", 1, top + 1);
        popAt(pos - 1);
    }

    cout << "\nDo you want to peek at the top of the stack? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        peek();
    }

    displayStack("Final Stack:");
    return 0;
}
