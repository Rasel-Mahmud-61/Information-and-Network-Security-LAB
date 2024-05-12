#include<bits/stdc++.h>
using namespace std;


string decryptCaesarCipher(std::string ciphertext, int key) {
string plaintext = "";
string letters = "abcdefghijklmnopqrstuvwxyz";
    int n = letters.size();

    for (char& symbol : ciphertext) {
        if (isalpha(symbol)) {
            int num = letters.find(tolower(symbol));
            num = (num - key + n) % n;
            plaintext += isupper(symbol) ? toupper(letters[num]) : letters[num];
        } else {
            plaintext += symbol;
        }
    }

    return plaintext;
}

int main() {
string encryptedMessage = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo";
  string keys = "abcdefghijklmnopqrstuvwxyz";

    for (int key = 0; key < keys.size(); ++key) {
    string decryptedMessage = decryptCaesarCipher(encryptedMessage, key);
      cout << "Hacking key #" << key << ": " << decryptedMessage << std::endl;
    }

    return 0;
}
