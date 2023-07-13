#include <iostream>
#include <vector>
#include <cmath>

double findRank(std::vector<double>& sortedData, double p) {
    int i = std::ceil(p * (sortedData.size() - 1));
    return sortedData[i];
}

std::vector<double> summarize(std::vector<double>& sortedData) {
    std::vector<double> rankData;
    std::vector<double> p = {0, 0.25, 0.5, 0.75, 1};

    for (int i = 0; i < p.size(); i++) {
        double rank = findRank(sortedData, p[i]);
        rankData.push_back(rank);
    }

    return rankData;
}

int main() {
    std::vector<double> sortedData = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9,
1};
    std::vector<double> rankData = summarize(sortedData);

    for (int i = 0; i < rankData.size(); i++) {
        std::cout << rankData[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
