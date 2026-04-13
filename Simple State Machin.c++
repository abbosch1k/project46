#include <iostream>
using namespace std;

int main() {
    int state = 0;

    if(state == 0) {
        cout << "Start\n";
        state = 1;
    }
    if(state == 1) cout << "Running";
}
