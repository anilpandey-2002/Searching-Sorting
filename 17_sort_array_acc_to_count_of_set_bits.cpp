#include <bits/stdc++.h>
using namespace std;

int countBits(int a)
{
    int count = 0;
    while (a)
    {
        count += a & 1;
        a >>= 1;
    }
    return count;
}

void insertionSort(int arr[], int aux[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key1 = aux[i], key2 = arr[i], j = i - 1;
        while (j >= 0 && aux[j] < key1)
        {
            aux[j + 1] = aux[j];
            arr[j + 1] = arr[j];
            j--;
        }
        aux[j + 1] = key1;
        arr[j + 1] = key2;
    }
}

void sortBySetBitCount(int arr[], int n)
{
    int aux[n];
    for (int i = 0; i < n; i++)
        aux[i] = countBits(arr[i]);
    insertionSort(arr, aux, n);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortBySetBitCount(arr, n);
    printArr(arr, n);
    return 0;
}
