Ninjas has been given an array. He wants to find a subarray such that the sum of all elements in the subarray is maximum. Subarray 'A' is greater than sub-array 'B' if sum(A) > sum(B). If two sub-array have the same maximum sum, then output the subarray that has a larger length. A subarray means a contiguous part of an array. For example, In 'arr' = [1, 2, 3, 4], [1, 2], [2, 3, 4] are the contiguous subarry but [1, 3, 4] is not a subarray.

Note: More than one sub-array can have a maximum sum, in that case, output any.

Input Format

First line consists of no of test cases Second and third line consists of size of the array and elements of the array

Constraints

1 <= T <= 5

Time limit: 1 sec.

1 <= N <= 1000

Output Format

print the maximum sum of subarray

Sample Input 0


  
CODE



def maxSubArray(nums):
    max_sum = float('-inf')
    curr_sum = 0

    for num in nums:
        curr_sum += num
        if curr_sum > max_sum:
            max_sum = curr_sum
        if curr_sum < 0:
            curr_sum = 0

    return max_sum

T = int(input())

for _ in range(T):
    N = int(input())
    arr = list(map(int, input().split()))
    max_sum = maxSubArray(arr)
    print(max_sum)
