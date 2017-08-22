#include <iostream>
#include <string>

using namespace std;

/**
 * Function to perform selection sort.
 * @param arr - the array to be sorted with keys
 * @param size - size of the array
 * @return - returns pointer to the sorted array
 */

int* InsertionSort(int* arr, int size){


    for (int i = 1; i < size; ++i){

        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){

            arr[j+1] = arr[j];
            j--;

        }

        arr[j+1] = key;

    }

    return arr;


}

int main() {
    int arr[7] = {7,6,5,4,1,3,2};
    int size = (sizeof(arr))/ sizeof(arr[0]);
    int* sortedArr = InsertionSort(arr,size);
    for (int i = 0; i < size; ++i){

        cout << sortedArr[i] << " ";
    }

    return 0;
}