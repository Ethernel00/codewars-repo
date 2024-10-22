#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <sstream>

std::unordered_map<std::string, int> smallNumbers = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, 
    {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, 
    {"eighteen", 18}, {"nineteen", 19}};
std::unordered_map<std::string, int> tensNumbers = {
    {"twenty", 20}, {"thirty", 30}, {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70}, {"eighty", 80}, {"ninety", 90}};

int processHyphen(std::string word) {
    if (word.size()-1 <= 0) return 0;
    size_t hyphen = word.find('-');
    if (hyphen != std::string::npos)
    {
        std::string part0 = word.substr(0, hyphen);
        std::string part1 = word.substr(hyphen + 1);
        int tens = tensNumbers[part0];
        int ones = smallNumbers[part1];
        return tens + ones;
    }
    return 0;
}

long parse_int(std::string number) {
    std::istringstream iss(number);
    std::string word;
    long result     = 0;
    long current    = 0;
    while (iss >> word){
        if (word.find('-') != std::string::npos) {
            current += processHyphen(word);
        }
        else if (smallNumbers.find(word) != smallNumbers.end()){
            current += smallNumbers[word];
        }
        else if (tensNumbers.find(word) != tensNumbers.end()){
            current += tensNumbers[word];
        }
        else if (word == "hundred"){
            current *= 100;
        }
        else if (word == "thousand"){
            result += current * 1000;
            current = 0;
        }
        else if (word == "million"){
            result += current * 1000000;
            current = 0;
        }
    }
    return result + current;
}
int main(){
    std::string number = {"two hundred and forty-six"};
    std::cout << parse_int(number);
}