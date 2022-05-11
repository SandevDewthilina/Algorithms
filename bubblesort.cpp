#include <iostream>

using namespace std;

void bubblesort(int arr[], int size);
void printarray(int arr[], int size);
void swapright(int *left, int *right);

int main()
{
    int arr[] = {6, 5, 3, 4, 1, 2, 6, 5, 3, 4, 1, 2, 55, 99, 1, 4, 22};
    int size = sizeof(arr) / sizeof(int);
    bubblesort(arr, size);
    printarray(arr, size);
}

void bubblesort(int arr[], int size)
{
    // main swiping iteratinos
    for (int i = 0; i < size - 1; i++)
    {
        int j = 0; // current index

        while (j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swapright(&arr[j], &arr[j + 1]);
            }

            j++;
        }
    }
}

void swapright(int *left, int *right)
{

    int temp = *left;
    *left = *right;
    *right = temp;
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\n";
}
