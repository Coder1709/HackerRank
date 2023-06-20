You are given an array Arrconsisting of n integers, you needto find all the distinct triplets present in the array which adds up to zero. An array is said to have a triplet {arr[i], arr[j], arr[k]} with 0 sum if there exists three indices i, j and k such that i!=j, j!=k and i!=k and arr[i] + arr[j] + arr[k] = 0.

Note : 1. You can return the list of values in any order. For example, if a valid triplet is {1, 2,-3}, then (2, -3, 1), (-3, 2, 1) etc is also valid triplet. Also, theordering of different triplets can be random i.e if there are more than one valid triplets, you can return them inany order. 2. The elements in the array need not be distinct. 3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".

Input Format

first line should be no of test cases second and third line must be size of the array and elements of the array

Constraints

1 <= T <= 50

1 <= N <= 10^3

-10^5 <= Arr[i] <= 10^5

Output Format

print the elements which makes the sum of zero

Sample Input 0



CODE


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    Scanner sc = new Scanner(System.in);
     int t = sc.nextInt();
     for(int l=0; l<t; l++){
        int n= sc.nextInt();
        int[] arr = new int[n];
         for(int i=0; i<n; i++){
             arr[i]=sc.nextInt();
         }
        int flag =0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==0){
                        System.out.print(arr[i]+" "+arr[j]+" "+arr[k]);
                        System.out.println();
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==1){
                break;
            }
        }
     }
        
    }
}
