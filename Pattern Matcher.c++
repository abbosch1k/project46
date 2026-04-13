#include <iostream>
using namespace std;

int main() {
    string s="abc123";
    for(char c:s)
        if(isdigit(c)) cout<<c;
}
