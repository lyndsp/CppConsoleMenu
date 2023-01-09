#include <iostream>
#include "Domain/Operation.h"

using namespace std;

int main() {

    Operation *operation = new Operation();

    cout << "Hello, World!" << endl;
    cout << " - " << operation->Menu() << endl;
    cout << endl;

    while (true) {
        string input;
        getline(cin, input);

        if (strcmp(input.c_str(), "q") == 0) {
            exit(0);
        }
        else {
            system("clear");

            cout << "Hello, World!" << endl;
            cout << " - " << operation->Menu() << endl;
            cout << endl;
        }
    }

    return 0;
}
