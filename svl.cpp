#include <iostream>
using namespace std;

// program for SMALLEST & LARGEST element in array

int largest_element(int n, int array[]) {

int largest = array[0];

if (n < 1) {
    return 0;
}

for (int i = 0; i < n; i++) {
    if (array[0] < array[i]) {
        largest = array[i];
    }
}
    return largest;
}

int smallest_element(int n, int array[]) {

int smallest = array[0];

    if (n < 1) {return 0;
    }

for (int j = 0; j < n; j++) {
    if (array[0] > array[j]) {
        smallest = array[j];
    }
}

    return smallest;

}

int main () {
    int num = 0;
    cout << "How many elements are in ur array? ";
    cin >> num;

   int array[num];
    for (int i = 0; i < num; i++) {
        cout << "Element " << i+1 << endl;
        cin >> array[i]; 
    }
    
    int minVal = smallest_element(num,array);
    int maxVal = largest_element(num,array);
cout << "Ur smolest element is: " << minVal << endl;
cout << "Ur largest element is: " << maxVal << endl;

    return 0;
}