#include <iostream>
using namespace std;

void selectionSort(int array[], int n)
{
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main()
{
    int array[] = {10, 8, 7, 2, 9, 1, 3, 5, 6, 4};
    int n = sizeof(array) / sizeof(array[0]);

    selectionSort(array, n);
    
    cout << "Sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
