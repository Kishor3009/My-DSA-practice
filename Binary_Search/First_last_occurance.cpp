#include <bits/stdc++.h>
using namespace std;

int First_occ(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;
    int ans = -1;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[12] = {2, 3, 4, 5, 5, 5, 5, 5, 5, 7, 9, 11};
    int key = 5;
    cout << "First occurrence of element is " << First_occ(arr, 12, key) << endl;
    cout << "Last occurrence of element is " << last_occ(arr, 12, key) << endl;
    return 0;
}
