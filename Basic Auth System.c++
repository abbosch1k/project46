#include <iostream>
using namespace std;

int main() {
    string u="admin", p="1234";
    string inU, inP;

    cin >> inU >> inP;

    if(inU==u && inP==p)
        cout<<"Login OK";
}
