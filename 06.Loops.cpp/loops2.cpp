#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;
    do {
        cout << "Do you want more tea (yes/no): ";
        if (!getline(cin, response)) {
            break; // Handles EOF / input stream errors cleanly
        }
    } while (response != "no");

    cout << "Okay, no more tea!" << endl;
    return 0;
}