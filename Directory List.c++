#include <iostream>
#include <filesystem>
using namespace std;

int main() {
    for(auto &p: filesystem::directory_iterator(".")) {
        cout<<p.path()<<endl;
    }
}
