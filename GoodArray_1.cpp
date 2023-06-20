"""

An array is good, if it satisfies the following criteria:

If array is of size N, then it should contain all elements from 1 to N.

As a direct consequence of the above statement, the array does not contain duplicate elements.

The array should not be sorted in ascending order.

Given N and elements of the array, your task is to check if it is Good or Not.

Input Format

The first line contains N representing array size. The next line contains N space separated integers representing the elements of array.

Constraints

2<=N<=100 1<=A<=100 where A represents an array element.

Output Format

The output contains a single line. If the array satisfies all the above conditions print "Good", otherwise print "Not Good"

Sample Input 0

4
1 2 3 4
Sample Output 0

Not Good
Explanation 0

The array has all the elements from 1 to 4 and without duplicates. So criteria 1 and 2 are satisfied but the array is sorted. So criteria 3 is failed. So print Not Good.

"""



<h1>CODE<h1>


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector < int> arr;
    int a ,b;
    cin>>a;
    for(int i = 0 ; i < a ; i++){
        cin>>b;
        arr.push_back(b);
    }
    
    vector <int> arr2;
    
    for(int i = 0 ; i < a ; i++){
        arr2.push_back(arr[i]);
    }
    
    sort(arr2.begin() ,arr2.end());
    
    
    if( arr == arr2){
        cout<<"Not Good";
    }
    else{
        int aa = 1;
        bool abc = false;
        for ( int i = 0 ; i < a ; i++)
        {
            
            if ( aa == arr2[i]){
                aa++;
                abc = true;
                
            }
            else{
                abc = false;
                continue;
            }
        }
        if(abc = false){
            cout<<"Good";
        }
        else{
            cout<<"Not Good";
        }
        
    }
    
    
    
    
    
    
    
    
    return 0;
}
