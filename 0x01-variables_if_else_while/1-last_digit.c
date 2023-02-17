#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int n = rand();

    std::cout << "Last digit of " << n << " is ";

    int last_digit = n % 10;

    if (last_digit > 5) {
        std::cout << last_digit << " and is greater than 5" << std::endl;
    } else if (last_digit == 0) {
        std::cout << last_digit << " and is 0" << std::endl;
    } else {
        std::cout << last_digit << " and is less than 6 and not 0" << std::endl;
    }

    return 0;
}
