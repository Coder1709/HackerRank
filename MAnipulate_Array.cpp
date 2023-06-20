/*

You are given an array of ‘N’ integers. You need to return another array ‘product’ such that ‘product[i]’ contains the product of all the arrays except the element at the ith position in the given array.

Note As the product of elements can be very large you need to return the answer in mod (10^9+7).

Input Format

First line consists of no of test cases for every test case first line must be size of the array and based on that take the input.

Constraints

1 <= T <= 10^2

2 <= N<= 10^4

1 <= A[i] <= 10^9

Output Format

The output must be the product of all the arrays except the element at the ith position in the given array.

Sample Input 0

2
5
1 3 3 10 2
6
2 4 6 3 1 1
Sample Output 0

180 60 60 18 90
72 36 24 48 144 144
Explanation 0

Test case 1: Product of elements except 1 = 3 * 3 * 10 * 2 = 180
Product of elements except 3 = 1 * 3 * 10 * 2 = 60
Product of elements except 3 = 1 * 3 * 10 * 2 = 60
Product of elements except 10 = 1 * 3 * 3 * 2 = 18
Product of elements except 2 = 1 * 3 * 3 * 10 = 90

Test case 2: Product of elements except 2 = 4 * 6 * 3 * 1 * 1 = 72
Product of elements except 4 = 2 * 6 * 3 * 1 * 1 = 36
Product of elements except 6 = 2 * 4 * 3 * 1 * 1 = 24
Product of elements except 3 = 2 * 4 * 6 * 1 * 1 = 48
Product of elements except 1 = 2 * 4 * 6 * 1 * 1 = 144
Product of elements except 1 = 2 * 4 * 6 * 3 * 1 = 144

*/


CODE

def computeProduct(arr):
    n = len(arr)
    mod = 10**9 + 7

    # Calculate the product of all elements in the array
    totalProduct = 1
    for num in arr:
        totalProduct = (totalProduct * num) % mod

    # Calculate the product array using the total product
    product = []
    for num in arr:
        # Calculate the product by dividing the total product by the current element
        currProduct = (totalProduct * pow(num, mod - 2, mod)) % mod
        product.append(currProduct)

    return product


# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read the size of the array and the array elements
    n = int(input())
    arr = list(map(int, input().split()))

    # Compute the product array
    product = computeProduct(arr)

    # Print the product array
    print(*product)
    
    
    
    //PYTHON

