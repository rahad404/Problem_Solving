#include <bits/stdc++.h>
using namespace std;

void conquer(int a[], int l, int m, int h) {
    int nL = m - l + 1;
    int nR = h - m;

    int Left[nL], Right[nR];

    for (int i = 0; i < nL; i++) {
        Left[i] = a[l + i];
    }
    for (int j = 0; j < nR; j++) {
        Right[j] = a[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < nL && j < nR) {
        if (Left[i] <= Right[j]) {  // Change this to Left[i] > Right[j] for descending order
            a[k++] = Left[i++];
        } else {
            a[k++] = Right[j++];
        }
    }

    while (i < nL) {
        a[k++] = Left[i++];
    }
    while (j < nR) {
        a[k++] = Right[j++];
    }
}

void mergeSort(int a[], int LB, int UB) {
    if (LB < UB) {
        int MID = LB + (UB - LB) / 2;
        mergeSort(a, LB, MID);
        mergeSort(a, MID + 1, UB);
        conquer(a, LB, MID, UB);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];  // Dynamic allocation based on input size

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "----------Sorted Array--------" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
