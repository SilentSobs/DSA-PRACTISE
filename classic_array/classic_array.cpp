#include <iostream>

using namespace std;

#define e endl

void updateArray(int arr[], int i, int val) {
    arr[i] = val;
}


void arrSize(int arr[]) {
	cout << "running inside a function";
	cout << sizeof(arr);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    updateArray(arr, 1, 13);

    // cout << arr[1] << e;


    arrSize(arr);

    return 0;
}