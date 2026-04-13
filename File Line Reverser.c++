#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream f("file.txt");
    vector<string> lines;
    string s;

    while(getline(f,s)) lines.push_back(s);

    for(int i=lines.size()-1;i>=0;i--)
        cout<<lines[i]<<endl;
}
