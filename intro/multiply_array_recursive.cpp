// Multiplying array elements, recursive

#include<iostream>
using namespace std;
 
// Function to calculate the product of 
// array using recursion
int multiply(int a[], int n)
{
    // Termination condition, starts at last element
    if (n==0)
        return(a[n]);
    else
        return (a[n] * multiply(a,n-1));
}
 
// Driver function
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array)/sizeof(array[0]);
    //Function call to calculate the product
    cout << multiply(array, n-1) << endl;
    return 0;
}