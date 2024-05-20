#include "matching_brackets.h"

namespace matching_brackets {
    
    bool check(std::string text){
        std::string stack;

        for (char ch : text) {
            switch (ch) {
            case '{':
            case '(':
            case '[':
                stack.push_back(ch);
                break;
            case '}':
                if (stack.empty() || stack.back() != '{') return false;
                stack.pop_back();
                break;
            case ')':
                if (stack.empty() || stack.back() != '(') return false;
                stack.pop_back();
                break;
            case ']':
                if (stack.empty() || stack.back() != '[') return false;
                stack.pop_back();
                break;
            default:
                break;
            }   
        }
        return stack.empty();
    }
}  // namespace matching_brackets