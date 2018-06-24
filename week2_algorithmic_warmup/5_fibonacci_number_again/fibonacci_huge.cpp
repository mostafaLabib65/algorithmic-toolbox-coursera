#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long getPisanoNumber(long long n, long long m){
    long long a = 0,b = 1, c;
    for(int i = 0; i < m*m; i++){
        c = (a + b) % m;
        a = b;
        b = c;
        if(a == 0 && b == 1){
            return i+1;
        }
    }

}


int getAnswer(long long n,long long m){
    long long pisano = getPisanoNumber(n,m);
    long long remainder = n % pisano;
    long long res = remainder;
    long long first = 0;
    long long second = 1;
    for (int i = 1; i < remainder; i++) {
        res = (first + second) % m;
        first = second;
        second = res;
    }
    return res % m;

}


int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << getAnswer(
            n, m) << '\n';
}
