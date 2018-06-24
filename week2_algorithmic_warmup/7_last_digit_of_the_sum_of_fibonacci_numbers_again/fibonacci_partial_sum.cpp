#include <iostream>
#include <vector>
using std::vector;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}


int getAnswer(int m,int n){
    int array[n];
    array[0] = 1;
    array[1] = 1;
    int answer = 0;
    for(int i = 2; i < n; i++){
        array[i] = (array[i-1] + array[i-2]) % 10;
        if(i >= m - 1) {
            answer += array[i];
        }
    }
    return answer;
}



int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << getAnswer(from, to) % 10  << '\n';
}
