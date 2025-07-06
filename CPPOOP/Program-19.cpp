#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main(){
    ofstream fout;
    fout.open("Zoom.txt");
    fout<<"Hello My name is Ankit\n";
    fout.close();
}