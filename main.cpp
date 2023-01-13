#include <iostream>
#include "Domain/Operation.h"

using namespace std;

int main() {

    auto *operation = new Operation();

    while (true) {
        cout << "Hello, World!" << endl;
        cout << " - " << operation->Menu() << endl;
        cout << endl;

        string input;
        getline(cin, input);

        if (strcmp(input.c_str(), "q") == 0) {
            exit(0);
        }
        else {
            system("clear");
        }
    }

    return 0;
}
