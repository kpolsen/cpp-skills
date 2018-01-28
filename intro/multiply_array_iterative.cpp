// Multiplying array elements, iterative

#include<iostream>
using namespace std;
 
// Function to calculate the product of the array
int multiply(int array[], int n)
{
    int pro = 1;
    for (int i=0;i<n;i++)
    {  
        pro = pro * array[i]; // set pro equal to previous multiplicative sum
		std::cout << pro << std::endl;
	}
    return pro;
}
 
// Driver function
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array)/sizeof(array[0]);
    //Function call to calculate product
	std::cout << multiply(array, n) << std::endl;
	// sizeof = size in bytes of array or other:
	std::cout << sizeof(array) << std::endl;
	std::cout << sizeof(array[0]) << std::endl;
	std::cout << n << std::endl;
    return 0;
}