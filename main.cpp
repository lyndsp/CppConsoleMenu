#include <iostream>
#include "Domain/Operation.h"

using namespace std;

int main() {

    auto *operation = new Operation();
    auto *specialOperation = new Operation("Special menu");

    while (true) {
        cout << "Hello, World!" << endl;
        cout << " - " << operation->Menu() << endl;
        cout << " - ";
        specialOperation->ShowMenu(cout);
        cout << endl;

        string input;
        getline(cin, input);

        if (strcmp(input.c_str(), "q") == 0) {
            exit(0);
        }
        else if (strcmp(input.c_str(), "s") == 0) {
            specialOperation->Execute(cin, cout);
        }

        system("clear");
    }

    return 0;
}
