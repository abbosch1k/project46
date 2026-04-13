#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("config.txt");
    f<<"mode=debug";
}
