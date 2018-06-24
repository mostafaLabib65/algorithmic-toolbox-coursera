#include <iostream>
#include <cstring>
#include <vector>
#include "algorithm"

using namespace std;
int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    sort(numbers.begin(),numbers.end());
    long a = numbers.at(n-1);
    long b = numbers.at(n-2);
    long result = a*b;
    std::cout << result << "\n";
}
