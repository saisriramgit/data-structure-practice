//Binary Search

#include <iostream>

int binarySearch(int arr[],int low, int high, int target) {
   
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[low] == target)
            return mid;
        else if(arr[low] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    //int arr[] = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    int arr[] = {10, 23, 45, 67, 92};
    int target = 92;
    int n = 5;
    int result = binarySearch(arr,0, n-1, target);
    (result == -1) ? std::cout<<"Not found":std::cout<<"Found "<<result;
   
    return 0;
}

//Linear Search

#include <iostream>

int linearSearch(int arr[],int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    int target = 93;
    int n = 10;
    int result = linearSearch(arr,n, target);
    (result == -1)? std::cout<<"Not found":std::cout<<"Found "<<result;
   
    return 0;
}


//Selection Sorting

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSearch(int arr[],int n) {
   for(int i = 0; i < n - 1; i++) {
       int min = i;
       for(int j = i + 1; j < n; j++) {
           if(arr[j] < arr[min]) {
               min = j;
           }
       }
       
       if(arr[i] != min) {
           swap(arr[min], arr[i]);
       }
   }
}

int main()
{
    int arr[] = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    //int arr[] = {10, 23, 45, 67, 92};
    int n = 10;
    selectionSearch(arr, n);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}

//Bubble Sort

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n) {
   for(int i = 0; i < n - 1; i++) {
       bool swapped = false;
       for(int j = 0; j < n - i - 1; j++) {
           if(arr[j] > arr[j+1]) {
               swap(arr[j], arr[j+1]);
               swapped = true;
           }
       }
       
       if(swapped == false) {
           break;
       }
   }
}

int main()
{
    int arr[] = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    //int arr[] = {10, 23, 45, 67, 92};
    int n = 10;
    bubbleSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}

//Insertion Sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n) {
   for(int i = 0; i <= n - 1; i++) {
       int j = i;
       while(j > 0 && arr[j-1] > arr[j]) {
           swap(arr[j-1], arr[j]);
           j--;
       }
   }
}

int main()
{
    int arr[] = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    //int arr[] = {10, 23, 45, 67, 92};
    int n = 10;
    insertionSort(arr, n);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}

//Merge Sort
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid, int high) {
    vector<int> temp;
    int l = low;
    int h = high;
    while(l <= mid && h <= high) {
        if(arr[l] <= arr[h]) {
            temp.push_back(arr[l]);
            l++;
        } else {
            temp.push_back(arr[h]);
            h++;
        }
    }
    while(l <= mid) {
        temp.push_back(arr[l]);
        l++;
    }
    while(h <= high) {
        temp.push_back(arr[h]);
        h++;
    }
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
   
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}


int main()
{
    vector<int>arr = {93, 17, 50, 71, 2 ,84 ,92 ,25 ,31 ,6};
    //int arr[] = {10, 23, 45, 67, 92};
    int n = 10;
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}