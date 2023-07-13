#include <iostream>
#include <vector>

std::vector<int> binSort(std::vector<int>& data) {
    int n = data.size();
    std::vector<int> bins(n, 0);

    for (int i = 0; i < n; i++) {
        bins[data[i]] = data[i];
    }

    return bins;
}

int main() {
    std::vector<int> data = {2, 6, 3, 1, 4, 5};
    std::vector<int> sorted = binSort(data);

    for (int i = 1; i < sorted.size(); i++) {
        std::cout << sorted[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}