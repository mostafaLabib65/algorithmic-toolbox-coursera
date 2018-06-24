#include <iostream>

int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

long long getAnswer(long long n){

    long long a = 1;
    long long b = 1;
    long long c;
    long long answer = 2;
    int l = 0;
    for(long i = 2; i < n; i++){
        c = (a + b) % 10;
        a = b;
        b = c;
        answer += pow(c,2);
    }
    return answer;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << getAnswer(n);
}
