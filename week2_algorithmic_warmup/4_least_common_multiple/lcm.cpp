#include <iostream>

long long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long long) a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;

    return (long long) a * b;
}

long long gcd(int a, int b){
    if(b == 0){
        return a;
    }
    long long a_dash = a % b;
    gcd(b,a_dash);

}

long long getAnswer(int a, int b){
    long long c = gcd(a,b);
    return a* (b/c);
}


int main() {
    long long a, b;
    std::cin >> a >> b;
    std::cout << getAnswer(a, b) << std::endl;
    return 0;
}
