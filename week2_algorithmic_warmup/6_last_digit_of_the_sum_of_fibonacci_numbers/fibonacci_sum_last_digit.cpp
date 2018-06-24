#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int getAnswer(long long n){
    if(n == 0){
	return 0;
	}else if(n == 1){
	return 1;
	}
    
    long long a = 1;
    long long b = 1;
	long long c;
    long long answer = 2;
    for(long long i = 2; i < n; i++){
        c = (a + b) % 10;
	a = b;
	b = c;
        answer += c;
    }
    return answer;
}
int main() {
    long long n;
    std::cin >> n;
    long long c = getAnswer(n) % 10;
    std::cout << c << '\n';
}
