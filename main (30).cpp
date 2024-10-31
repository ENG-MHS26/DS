#include <iostream>
using namespace std;

template <typename T>
void shellsort(T a[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
        for (int i = gap; i < n; ++i)
        {
            T tmp = a[i];
            int j = i;
            for (; j >= gap && tmp < a[j - gap]; j -= gap)
                a[j] = a[j - gap];
            a[j] = tmp;
        }
}

int main()
{
    int arr[] = {34, 8, 64, 51, 32, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    shellsort(arr, n);

    cout << "the list after sorting: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
