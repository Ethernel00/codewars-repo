#include <iostream>
#include <string>
#include <vector>

int path_finder(std::string maze) {
	// TODO: Return the minimal number of steps required to reach the exit located at
	// (n - 1, n - 1) from the initial position (0, 0) in an n × n maze if possible and
	// -1 otherwise

	// YEAH NO, STORING A MATRIX IN A STRING FORMAT USING LITERAL NEWLINE NOT TO MY LIKING
	std::vector<std::string> _matrix; _matrix.reserve(sizeof(maze));
	long steps = 0;
	int posX = 0; int posY = 0;
	for (auto chr : maze) {
		if (chr == '.') {
			_matrix[posX][posY];
		}
	}

	return -1;
}

int main(){
	std::string maze = {"......\n......\n......\n......\n......\n......"};
}