#include <iostream>
using namespace std;

// program for LARGEST element in array

int largest_element(int n, int array[]) {

int largest;

for (int i = 1; i < n; i++) {
    if (array[0] < array[i]) {
        array[i] == largest;
    }
}

    return largest;
}

int main () {
    int num = 0;
    cout << "How many elements are in ur array? ";
    cin >> num;

   int array[4];
    for (int i = 0; i < num; i++) {
        cout << "Element " << i+1 << endl;
        cin >> array[i]; 
    }
    
    cout << *(array) << endl;
cout << "Ur largest element is: " << largest_element(4,array) << endl;

    return 0;
}