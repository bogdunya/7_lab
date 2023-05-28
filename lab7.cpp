#include <iostream>
using namespace std;

// функция для ввода элементов массива
void inputArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
    }
}

// функция для объединения двух массивов в один
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i=0, j=0, k=0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        arr3[k++] = arr1[i++];
    }
    while(j < n2) {
        arr3[k++] = arr2[j++];
    }
}

// функция для вывода объединенного массива на экран
void printArray(int arr[], int n) {
    cout << "Объединенный массив: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[100], arr2[100], arr3[200], n1, n2;

    cout << "Введите количество элементов первого массива: ";
    cin >> n1;
    inputArray(arr1, n1);

    cout << "Введите количество элементов второго массива: ";
    cin >> n2;
    inputArray(arr2, n2);

    mergeArrays(arr1, n1, arr2, n2, arr3);

    printArray(arr3, n1+n2);

    return 0;
}
