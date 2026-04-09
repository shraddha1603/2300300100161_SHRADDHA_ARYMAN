#include <iostream>
#include <algorithm> 
#include <iterator>  

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    std::reverse(std::begin(arr), std::end(arr));

    std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
