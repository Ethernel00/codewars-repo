#include <vector>
#include <iostream>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    // first done this in a static way -_-; then realized my dumb mistake
    std::vector<int> tempVec;

    if (snail_map.empty()) return tempVec;

    int top     = 0, bottom = snail_map.size()-1;
    int left    = 0, right  = snail_map[0].size()-1;

    while (top <= bottom && left <= right){
        for (int i = left; i <= right; ++i){
            tempVec.push_back(snail_map[top][i]);
        }
        ++top;
        for (int i = top; i <= bottom; ++i){
            tempVec.push_back(snail_map[i][right]);
        }
        --right;
        if (top <= bottom){
            for (int i = right; i >= left; --i){
                tempVec.push_back(snail_map[bottom][i]);
            }
            --bottom;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
            {
                tempVec.push_back(snail_map[i][left]);
            }
            ++left;
        }
    }
    return tempVec;
}


int main()
{
    std::vector<std::vector<int>> v =   {{1, 2, 3, 4},
                                        {12, 13, 14, 5},
                                        {11, 16, 15, 6},
                                        {10, 9, 8, 7}};

    std::vector<std::vector<int>> v1 = {{1, 2, 3,},
                                       {12, 13, 14,},
                                       {11, 16, 15,}};
    std::vector<int> result = snail(v1);
    for (auto item : result){
        std::cout << "results: " << item << std::endl;
        }
    system("pause");
}