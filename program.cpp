#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void printMessage(const vector<string>& msg, const string& separator) {
    for (size_t i = 0; i < msg.size(); ++i) {
        cout << msg[i];
        if (i != msg.size() - 1) cout << separator;
    }
    cout << endl;
}

vector<string> split(const string& str) {
    vector<string> result;
    istringstream iss(str);
    string word;
    while (iss >> word) {
        result.push_back(word);
    }
    return result;
}

int main() {
    cout << "Enter your message (words separated by spaces): ";
    string name ;
    getline(cin, name);

    vector<string> msg = split(name);

    cout << "Enter a separator: ";
    string separator;
    getline(cin, separator);

    cout << "Your formatted message:\n";
    printMessage(msg, separator);

    return 0;
}
