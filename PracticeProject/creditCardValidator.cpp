#include <iostream>
#include <string>

//getting the double of a digit and converting it to a single digit
int getDigit(int number) {
    int doubled = number * 2;
    return (doubled < 10) ? doubled : (doubled % 10 + doubled / 10);
}

//calculating the sum of all the odd digits
int sumOddDigits(const std::string &cardNumber) {
    int sum = 0;
    for (int i = cardNumber.length() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // Convert char to int
    }
    return sum;
}

//calculating the sum of all the even digits
int sumEvenDigits(const std::string &cardNumber) {
    int sum = 0;
    for (int i = cardNumber.length() - 2; i >= 0; i -= 2) {
        sum += getDigit(cardNumber[i] - '0'); // Convert char to int
    }
    return sum;
}

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // Check if the card number is valid
    if (result % 10 == 0 && cardNumber.length() >= 13 && cardNumber.length() <= 16) {
        std::cout << "Valid Credit Card Number\n";
    } else {
        std::cout << "Invalid Credit Card Number\n";
    }

    return 0;
}
