//Missing Number

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMissingNum(int arr[], int n) {
    int N = n + 1;
    int total = (N) * (N + 1) /2;
    for(int i = 0; i < n; i++) {
        total -= arr[i];
    }
    return total;
 }

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = 4;
    int result = getMissingNum(arr, n);
    cout<<result;
    return 0;
}