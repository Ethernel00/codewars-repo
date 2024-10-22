#include <vector>
#include <string>
#include <iostream>

std::string findNeedle(const std::vector<std::string>& haystack)
{
    // You may use the function std::to_string to convert numbers to strings for easy concatenation. 
    // E.g., ("hi" + std::to_string(123)) ==> "hi123". Of course, that's only one of many approaches.
    std::string needleStr = "needle";
    int position = -1;
    for (size_t i = 0; i < haystack.size(); i++){
        if (haystack[i] == needleStr){
            position = i;
            break;
        }
    }
    if (position != -1){
        return "found the needle at position " + std::to_string(position);
    }
    return nullptr;
}

int main(){
    std::vector<std::string> haystack = {"hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"};
    findNeedle(haystack);
    system("pause");
}