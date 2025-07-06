#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin>>x;
    string s=to_string(x);
    cout<<s.length();
    string str="anka";
    // Check if the string is numeric before converting
    if (all_of(str.begin(), str.end(), ::isdigit)) {
        int y = stoi(str);
        cout << y;
    } else {
        cout << "\nInvalid input for conversion to int.";
    }
    return 0;
}