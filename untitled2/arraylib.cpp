#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>



int* arrIn(int arrLength){
    int* arr = new int[arrLength];
    for (int i = 0; i < arrLength; i++) {
        std::cout << "Enter a number: ";
        std::cin >> arr[i];
    }
    return arr;
}
int arrOut(int arrLength, int array[]){
    for (int i = 0; i < arrLength; i++){
        std::cout << array[i] << ' ';
    }
    return 0;
}
int getMin(int* arr, int n){
    int min = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int* arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int* sortArr(int* arr,int n){
    std::sort(arr,arr + n);
    return arr;
}

void biggerOut(int* arr, int i, int n){
    for (int k = 0; k < n ; k++)
    {
        if (arr[k] > i){
            std::cout << arr[k] << ' ';
        }
    }
}

void excludeMinus(int* arr , int n){
    for (int k = 0; k < n ; k++)
    {
        if (arr[k] < 0){
            arr[k] = 0;
        }
    }

}

int sumArr(int* arr , int n){
    int sum = 0;
    for (int i = 0 ; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}



int multiplyArr(int* arr , int n) {
    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum = sum * arr[i];
    }
    return sum;
}

bool isPrime(int n)
{

    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}


int onlyPrimeArr(int* arr, int n){
    int counter  = 0;
    for (int i = 0; i < n; i++){
        if (isPrime(arr[i])){
            counter++;
        }
    }
    return counter;
}
