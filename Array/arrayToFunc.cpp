#include <iostream>

double sum(double prices[], int size);

int main() {
    double prices[] = {1.2, 3.4, 5.6, 7.8};
    int size = sizeof(prices) / sizeof(prices[0]); // Calculate array size
    double total = sum(prices, size);
    std::cout << "The total is: $" << total << std::endl;
    return 0;
}

//size needs to be passed as an argument
//the array is passed as a pointer
//the function does not know the size of the array

double sum(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}
