#include <iostream>
#include <vector>

int main() {
    // for loop
    for(int i = 0; i < 5; ++i)
        std::cout << "for: " << i << "\n";

    // while loop
    int j = 0;
    while(j < 5) {
        std::cout << "while: " << j << "\n";
        ++j;
    }

    // do-while loop
    int k = 0;
    do {
        std::cout << "do-while: " << k << "\n";
        ++k;
    } while(k < 5);

    // range-based for loop
    std::vector<int> v = {0, 1, 2, 3, 4};
    for(int x : v)
        std::cout << "range-for: " << x << "\n";

    return 0;
}
