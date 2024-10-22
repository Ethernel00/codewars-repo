#include <vector>
#include <iostream>
#include <tuple>
/*std::tuple<unsigned int, unsigned int> validate_neighbours(std::vector<std::vector<int>> &field, std::tuple<unsigned int, unsigned int> posXY){

std::tuple<unsigned int, unsigned int> validate_neighbours(std::vector<std::vector<int>> &field, std::tuple<unsigned int, unsigned int> posXY) {
    unsigned int x = std::get<0>(posXY); // Row (X)
    unsigned int y = std::get<1>(posXY); // Column (Y)
    
    // Check right neighbor
    if (y + 1 < field[x].size() && field[x][y + 1] == 1) {
        return {x, y + 1};
    }
    // Check left neighbor
    if (y > 0 && field[x][y - 1] == 1) {
        return {x, y - 1};
    }
    // Check bottom neighbor
    if (x + 1 < field.size() && field[x + 1][y] == 1) {
        return {x + 1, y};
    }
    // Check top neighbor
    if (x > 0 && field[x - 1][y] == 1) {
        return {x - 1, y};
    }

    // Return the original position if no valid neighbor is found
    return posXY;
}

	// std::get<0>(posXY)
	// std::get<1>(posXY)
	std::tuple<unsigned int, unsigned int> result;
	if (std::get<1>(posXY) < field[std::get<0>(posXY)].size() && field[std::get<0>(posXY)][std::get<1>(posXY)+1] == 1) {
			return {std::get<0>(posXY), std::get<1>(posXY) + 1};

				} // check left
				else if (std::get<1>(posXY)-1 < 0 && field[std::get<0>(posXY)][std::get<1>(posXY)-1] == 1) {
					
				} // check bottom
				else if (std::get<0>(posXY)+1 < field.size() && field[std::get<0>(posXY)+1][std::get<1>(posXY)] == 1) {
					
				} // check top
				else if (std::get<0>(posXY)-1 < 0 && field[std::get<0>(posXY)-1][std::get<1>(posXY)] == 1) {
					
				}
}*/

std::tuple<unsigned int, unsigned int> validateNeighbours(std::vector<std::vector<int>> &field, unsigned int x, unsigned int y){
	
} 

bool validate_battlefield(std::vector< std::vector<int> > field) {
	/*
	>	check for filled positions, check near positions
	>	check if it's a straight line
	>	after validition check which battleship it's corresponds to
	> 	check the corresponding number of ships
	*/

	std::vector<std::vector<int>> checkedPosition {
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

	unsigned int nBattleShip = 0, nCruisers = 0, nDestroyers = 0, nSubmarines = 0;
	unsigned int tempI = 0, tempJ;
	unsigned int tempCounter = 0;

	for (size_t i=0; i < field.size()-1; i++){
		for (size_t j=0; j < field[i].size()-1; j++) {
			if (field[i][j] == 1){
				checkedPosition[i][j];
				// check neighbours position
				tempCounter++;
				tempI = i; tempJ = j;
				// check right
				if (tempJ+1 < field[tempI].size() && field[tempI][tempJ+1] == 1) {

				} // check left
				else if (tempJ-1 < 0 && field[tempI][tempJ-1] == 1) {
					
				} // check bottom
				else if (tempI+1 < field.size() && field[tempI+1][tempJ] == 1) {
					
				} // check top
				else if (tempI-1 < 0 && field[tempI-1][tempJ] == 1) {
					
				}
			} 
		}
	}
	return false;
}

int main(){
	std::vector<std::vector<int>> exField {
      std::vector<int> {1, 0, 0, 0, 0, 1, 1, 0, 0, 0},
      std::vector<int> {1, 0, 1, 0, 0, 0, 0, 0, 1, 0},
      std::vector<int> {1, 0, 1, 0, 1, 1, 1, 0, 1, 0},
      std::vector<int> {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      std::vector<int> {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
      std::vector<int> {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
      std::vector<int> {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
	bool test = validate_battlefield(exField);
	system("pause");
}