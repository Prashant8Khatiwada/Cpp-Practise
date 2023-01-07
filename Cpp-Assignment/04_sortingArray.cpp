#include <iostream>
#include <string>
using namespace std;
#define N 6
void sort(int num[])
{
    int i, j, temp;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        cout << num[i] << endl;
    }
};

void sort(float num[])
{
    int i, j;
    float temp;
    for (i = 1; i < N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        cout << num[i] << endl;
    }
};

void sort(char *arr, int sz)
{
    for (int i = 1; i < sz; i++)
    {
        for (int j = 0; j < sz - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int num[] = {20, 30, 5, 60, 10, 90};
    cout << "Sorting of integer is:" << endl;
    sort(num);

    float floatnum[] = {20.5, 30.3, 5.8, 6.30, 1.1, 9.10};
    cout << "Sorting of float is:" << endl;
    sort(floatnum);

    const int SIZE = 6;
    char arr[SIZE] = {'a', 'd', 'r', 'b', 'c', 'e'};
    sort(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}