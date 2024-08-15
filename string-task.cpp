#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word, result;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
        if (word[i] != 'a' && word[i] != 'o' && word[i] != 'y' &&
            word[i] != 'i' && word[i] != 'e' && word[i] != 'u') {
            result += '.';
            result += word[i];
        }
    }

    cout << result;
    return 0;
}
