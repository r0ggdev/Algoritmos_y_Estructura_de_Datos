#include<iostream>
using namespace std; 

void insertionSort(int arr_num[], int size) {

    for (int i = 0; i < size; i++) {    // (1+1) + n + 1 == 3 + n --> O(n)

        int aux = arr_num[i];   // n[ 1 + 1 ] == n[2] --> O(n)
        
        short j = i - 1;    // n[1 + 1 + 1] --> O(n)

        while (j >= 0 && arr_num[j] > aux) {    // n[1 + n] --> O(n²) 

            arr_num[j + 1] = arr_num[j];    // n[1 + n] --> O(n²)
            
            j = j - 1;  // n[1 + 1 + n] --> O(n²)
        }

        arr_num[j + 1] = aux;   // n[ 1 + 1 ] --> O(n)
    }

    // n + n + n +n² + n² + n² + n
    //  3n² + 4n 
    // O(n²)

    // [(1+1) + n + 1] [(1+1) + (1+1+1) [1+n + (1+1) + (1+1)]+(1+1)]
    // [ 3 + n ] [ 5 ( 5 + n ) + 2 ]
    // [ 3 + n ] [25 + 5n + 2]
    // 75 + 15n + 6 + 35n + 5n² + 2n
    // 5n² +  52n + 81
    // O(n²)
}

void printArr(int arr_num[], int size) {
    for (short i = 0; i < size; i++) {
        cout << arr_num[i] << " ";
    }
}

int main() {

    int arr_num[5] = { 7,3,2,8,5 };
    int size = sizeof(arr_num) / sizeof(arr_num[0]);

    cout << "\nMostrar arreglo: "; 
    printArr(arr_num, size);
    
    cout << "\nMostrar arreglo ordenado: "; 
    insertionSort(arr_num, size);
    printArr(arr_num, size);

    return 0;
}
