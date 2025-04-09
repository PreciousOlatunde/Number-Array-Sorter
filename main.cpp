#include <iostream>

//function prototypes
void printArray(int* arr, int size);
void selectionSort(int* arr, int size);
void swap(int* a, int* b);

//main function
//collects length of array from the user, creates the array, and calls selectionSort()
int main()
{
    int size = 0;

    //collect size from the user and checks against constraints
    while(size <= 0 || size > 100){
        std::cout << "Enter size of the array between 1 and 100 inclusive: ";
        std::cin >> size;
    }
    
    //ask the user for numbers to fill the array;
    int arr[size]; 
    std::cout << "\nEnter the " << size << " number(s) for the array: " <<std::endl;
    for (int i = 0; i < size; i++){
        std::cin >> arr[i];

    }
    
    //print out the array before and after sorting
    std::cout << "\nOriginal array: ";
    printArray(arr, size);
    selectionSort(arr, size);
    std::cout << "\nSorted array: ";
    printArray(arr, size);
 
    return 0;
}

//printArray()
//prints the array passed into it
void printArray(int* arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
}

//selectionSort()
// sorts the array passed into it in ascending order
void selectionSort(int* arr, int size) {
    
    for(int i = 0; i < size - 1; i++){
        int small = i;
        
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[small]){
                small = j;
            }
        }
        
        swap(&arr[small], &arr[i]);
        
    }
    
}

//swap()
//swaps the two values passed into it
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}