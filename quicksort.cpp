#include <iostream>
using namespace std;


int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l, j = h;

    while (i < j) {
        while (a[i] <= pivot) {
            i++;
        }

        while (a[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(a[i], a[j]);
        }
    }

    swap(a[l], a[j]);
    return j;
}


void quickSort(int a[], int l, int h) {
    if (l < h) {
        int pivot = partition(a, l, h);

        
        quickSort(a, l, pivot);
        quickSort(a, pivot + 1, h);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
