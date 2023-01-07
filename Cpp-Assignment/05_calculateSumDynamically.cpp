#include <iostream>
#include <cstdlib>

// Function prototype
int sum(int *arr, int n);

int main()
{
    int n, *arr, sum_val;

    // Get the number of elements in the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Allocate memory for the array
    arr = new int[n];

    // Get input for the array elements
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    // Find the sum of the elements in the array
    sum_val = sum(arr, n);

    // Print the sum
    std::cout << "Sum of the elements in the array: " << sum_val << std::endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}

// Function to find the sum of elements in an array
int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
