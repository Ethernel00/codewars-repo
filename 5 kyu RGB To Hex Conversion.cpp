#include <string>
#include <sstream>

std::string rgb_to_hex(int r, int g, int b) {
    if (r < 0) r = 0; else if (r > 255) r = 255;
    if (g < 0) g = 0; else if (g > 255) g = 255;
    if (b < 0) b = 0; else if (b > 255) b = 255;

    std::stringstream stream;
    stream << std::uppercase << std::hex << r; // Convert to uppercase
    std::string hexR = stream.str();
    stream.str("");

    stream << std::uppercase << std::hex << g; // Convert to uppercase
    std::string hexG = stream.str();
    stream.str("");

    stream << std::uppercase << std::hex << b; // Convert to uppercase
    std::string hexB = stream.str();
    stream.str("");

    // Pad with zeros if necessary
    if (hexR.length() == 1) hexR = "0" + hexR;
    if (hexG.length() == 1) hexG = "0" + hexG;
    if (hexB.length() == 1) hexB = "0" + hexB;

    return hexR + hexG + hexB;
}