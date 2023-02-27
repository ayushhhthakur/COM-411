#include <iostream>
using namespace std;

class MathFunctions {
public:
    static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n-1);
        }
    }

    static bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    // Take input from user for factorial calculation
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;
    int fact = MathFunctions::factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;

    // Check if n is a prime number
    bool is_prime = MathFunctions::isPrime(n);
    if (is_prime) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}
