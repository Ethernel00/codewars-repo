#include <vector>
#include <numeric>

int find_even_index(const std::vector<int> numbers) {

	int totalSum = std::accumulate(numbers.begin(), numbers.end(), 0);
	int leftSum = 0;
	for (auto i = 0; i < numbers.size(); ++i) {
		totalSum -= numbers[i];
		if (leftSum == totalSum) {
			return i;
		}
		leftSum += numbers[i];
	}

	return -1;
}