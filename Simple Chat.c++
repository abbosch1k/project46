#include <iostream>
using namespace std;

int main() {
    string msg;

    while(true) {
        cout << "You: ";
        getline(cin, msg);

        if(msg == "exit") break;

        cout << "Friend: OK, I got -> " << msg << endl;
    }
}
