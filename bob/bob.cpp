#include "bob.h"
#include <string>
#include <algorithm>
#include <cctype>


namespace bob {
    std::string hey(std::string input) {
        std::string trimmed_input = input;
        trimmed_input.erase(std::remove_if(trimmed_input.begin(), trimmed_input.end(), ::isspace), trimmed_input.end());

        if (trimmed_input.empty()) {
           return "Fine. Be that way!";
        }
        else if (trimmed_input[trimmed_input.length() -1] == '?')
        {
            if (is_uppercase(trimmed_input))
                return "Calm down, I know what I'm doing!";
            else
                return "Sure.";
        }
        else if (is_uppercase(trimmed_input))
        {
            return "Whoa, chill out!";
        }
        else
            return "Whatever.";
    }

    bool is_uppercase(const std::string &s) {
        bool has_uppercase = false;
        for(char c : s) {
            if(std::islower(c)) {
                return false;
            }
            if(std::isupper(c)) {
                has_uppercase = true;
            }
        }
        return has_uppercase;
    }
} 

