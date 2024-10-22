#include <string>
#include <iostream>

std::string format_duration(int seconds){
	int minutes = 60;
	int hours = 3600;
	int days = 86400;
	int years = 31536000;

	if (seconds <= 0)
		return "now";

	int temp = seconds;

	int y = temp / years;
	temp %= years;
	int d = temp / days;
	temp %= days;
	int h = temp / hours;
	temp %= hours;
	int m = temp / minutes;
	temp %= minutes;
	int s = temp;

	std::string result = "";

	if (y > 0)
		result += std::to_string(y) + " year" + (y > 1 ? "s" : "");
	if (d > 0)
		result += (result.empty() ? "" : ", ") + std::to_string(d) + " day" + (d > 1 ? "s" : "");
	if (h > 0)
		result += (result.empty() ? "" : ", ") + std::to_string(h) + " hour" + (h > 1 ? "s" : "");
	if (m > 0)
		result += (result.empty() ? "" : ", ") + std::to_string(m) + " minute" + (m > 1 ? "s" : "");
	if (s > 0)
		result += (result.empty() ? "" : ", ") + std::to_string(s) + " second" + (s > 1 ? "s" : "");

	size_t last_comma = result.find_last_of(',');
	if (last_comma != std::string::npos)
		result.replace(last_comma, 1, " and");

	return result;
}


int main(){
	int seconds = 5223;
	std::cout << format_duration(seconds) << std::endl;
}