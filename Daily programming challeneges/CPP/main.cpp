#include <iostream>

/* Implement division of two positive integers without using the division, multiplication, or modulus operators.
 * Return the quotient as an integer, ignoring the remainder
 */

int main() {
    int a;
    int b;

    std::cout << "Enter number to be divided: ";
    std::cin >> a;

    std::cout << "Enter the divisor: ";
    std::cin >> b;

    int i = 0;
    while(true){
        a -= b;
        i++;
        if(a < 0){
            std::cout << "Quotient I: " << i - 1;
            break;
        } else if (a == 0){
            std::cout << "Quotient B: " << i;
            break;
        }
    }



}
