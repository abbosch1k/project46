#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("test.txt");
    if(f) cout<<"Exists";
    else cout<<"Not found";
}
