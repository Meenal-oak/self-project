#include <iostream>
using namespace std;

void conquer(int *arr, int si, int mid, int ei)
{
    int n = ei - si + 1;      // merged array length
    int *merged = new int[n]; // allocate memory for the merged array

    int idx1 = si;      // first array
    int idx2 = mid + 1; // second array
    int x = 0;          // merged array tracking
    while (idx1 <= mid && idx2 <= ei)
    {
        if (arr[idx1] <= arr[idx2])
        {
            merged[x] = arr[idx1];
            x++;
            idx1++;
        }
        else
        {
            merged[x] = arr[idx2];
            x++;
            idx2++;
        }
    }

    while (idx1 <= mid)
    { // if some element remain in first arr
        merged[x] = arr[idx1];
        x++;
        idx1++;
    }

    while (idx2 <= ei)
    { // if some element remain in second arr[']
        merged[x] = arr[idx2];
        x++;
        idx2++;
    }

    for (int i = 0, j = si; i < n; i++, j++) // until merged length
    {
        arr[j] = merged[i];
    }

    delete[] merged;
}

void divide(int *arr, int si, int ei)
{
    // base case
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2; // si - ei / 2 fails in overflow case

    // left side array k liee
    divide(arr, si, mid);
    // right side array k liee
    divide(arr, mid + 1, ei);

    // sort
    conquer(arr, si, mid, ei);
}

int main()
{
    int arr[] = {23, 45, 63, 66, 7};
    int n = 5;
    divide(arr, 0, n - 1);




    // print
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
