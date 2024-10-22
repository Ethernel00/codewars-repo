#include <iostream>
#include <vector>
#include <queue>

long queueTime(const std::vector<int>& customers, int n) {
  
    std::priority_queue<int, std::vector<int>, std::greater<int>> tills;
    for (auto i = 0; i < n; i++) {
        tills.push(0);
    }
    for (auto customer : customers) {
        int minFinishTime = tills.top();
        tills.pop();
        tills.push(minFinishTime + customer);
    }
    int maxFinishTime = 0;
    while (!tills.empty()) {
        maxFinishTime = std::max(maxFinishTime, tills.top());
        tills.pop();
    }
    return maxFinishTime;
}