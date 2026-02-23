#include <iostream>
using namespace std;

//hello sachin
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
   
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    //hello saran
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
}

//hello 
void printArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//hi
int main() {
    
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    
    
    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = 5;
    
    
    int merged[size1 + size2];
    

    mergeArrays(arr1, size1, arr2, size2, merged);
    

    cout << "First Array: ";
    printArray(arr1, size1);
    
    cout << "Second Array: ";
    printArray(arr2, size2);
    
    cout << "Merged Array: ";
    printArray(merged, size1 + size2);
     cout << "Hi saran: ";
    return 0;
}

