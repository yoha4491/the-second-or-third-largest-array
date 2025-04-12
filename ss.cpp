#second largest number
#include <iostream>

using namespace std;

int findSecondLargest(int numbers[], int size) {
    
    if (size < 2) {
        cout << "Error: Not enough elements." << endl;
        return -1; 
    }

    int largest = -2147483648;
    int secondLargest = -2147483648; 

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest; 
            largest = numbers[i];     
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i]; 
        }
    }

    if (secondLargest == -2147483648) {
        cout << "Error: No second largest number." << endl;
        return -1; 
    }

    return secondLargest;
}

int main() {
    int numbers[] = {34, 15, 88, 2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    int secondLargest = findSecondLargest(numbers, size);
    if (secondLargest != -1) {
        cout << "The second largest number is: " << secondLargest << endl;
    }

    return 0;
}
#third largest number
#include <iostream>

using namespace std;

int findThirdLargest(int numbers[], int size) {
    
    if (size < 3) {
        cout << "Error: Not enough elements." << endl;
        return -1; 
    }

    int largest = -2147483648; 
    int secondLargest = -2147483648; 
    int thirdLargest = -2147483648; 

    
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;       
            largest = numbers[i];          
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            thirdLargest = secondLargest; 
            secondLargest = numbers[i];    
        } else if (numbers[i] > thirdLargest && numbers[i] != secondLargest && numbers[i] != largest) {
            thirdLargest = numbers[i]; 
        }
    }

    if (thirdLargest == -2147483648) {
        cout << "Error: No third largest number." << endl;
        return -1; 
    }

    return thirdLargest;
}

int main() {
    int numbers[] = {34, 15, 88, 2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    int thirdLargest = findThirdLargest(numbers, size);
    if (thirdLargest != -1) {
        cout << "The third largest number is: " << thirdLargest << endl;
    }

    return 0;
}