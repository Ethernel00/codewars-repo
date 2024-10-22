#include <iostream>
#include <string>
#include <vector>

std::string multiply(std::string a, std::string b) {
	if (a == "0" || b == "0") { return "0"; }
	for (auto c : a) { if (c < '0' || c > '9') { return "0"; } } 
	for (auto c : b) { if (c < '0' || c > '9') { return "0"; } } 

	std::vector<int> tempVecInt; tempVecInt.reserve( ( a.size() + b.size() ) );
	int tempa = 0, tempb = 0;
	for (auto c : a) {
		tempa = tempa*10 + (c/'0');
	}
	std::cout << tempa;
	return a;
}

#include <iostream>
int main() {
	std::string i = "2135", j = "231";
	std::cout << multiply(i, j);
}