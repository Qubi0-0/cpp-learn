#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::string rotate(std::string word, int rot_num) {
        std::string result;
        for (int i=0;i<int(word.length()); i++) {
            if (isalpha(word[i])) {
                bool is_upper = isupper(word[i]);
                int pos = alphabet.find(tolower(word[i]));
                int position = (pos + rot_num) % alphabet.length();
                char rotated_char = alphabet[position];
                result += is_upper ? toupper(rotated_char) : rotated_char;
            }
            else result += word[i];
        }
        return result;
    }
  }   // namespace rotational_cipher
