#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int enemies = rand()%5;

    for(int i=0;i<enemies;i++)
        cout<<"Enemy spawned\n";
}
