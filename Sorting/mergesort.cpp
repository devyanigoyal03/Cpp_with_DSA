#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
    }
    for (int i = 0; i < n2; i++)
    {
        M[i] = arr[q + 1 + i];
    }

    int i, j, k;
    i = 0, j = 0, k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

int mergeSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main()
{
    int n, arr[20];
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Enter the values of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}