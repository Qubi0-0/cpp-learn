#include "atbash_cipher.h"
#include <string>

namespace atbash_cipher {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
        std::string rev_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    std::string encode(std::string word) {
        std::string result;
        int letterCount = 0;
        for (int i = 0; i < int(word.length()); i++) {
            if (isalpha(word[i]) || isdigit(word[i])) {
                if (letterCount == 5) {
                    result += ' ';
                    letterCount = 0;
                }
                if (isalpha(word[i])) {
                    int pos = alphabet.find(tolower(word[i]));
                    result += rev_alphabet[pos];
                } else {
                    result += word[i];
                }
                letterCount++;
            }
        }
        return result;
    }

    std::string decode(std::string word) {

        std::string result;
        for (int i = 0; i < int(word.length()); i++) {
            if (isalpha(word[i]) || isdigit(word[i])) {
                if (isalpha(word[i])) {
                    int pos = rev_alphabet.find(tolower(word[i]));
                    result += alphabet[pos];
                } else {
                    result += word[i];
                }
            }
        }
        return result;
    }
}  // namespace atbash_cipher
