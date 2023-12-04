#include <iostream>
#include "arraylib.h"



int main() {
//    int array = arrIn(10);
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    arrOut(n,arr);
    std::cout << '\n' << getMax(arr,n) << ' ' << getMin(arr,n) << '\n';
    biggerOut(arr, 10, n);
    std::cout << '\n'<< sumArr(arr , 5) << '\n' << multiplyArr(arr ,5);
}