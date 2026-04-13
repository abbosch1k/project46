#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int chance=rand()%100;

    if(chance<50) cout<<"Common";
    else cout<<"Rare";
}
