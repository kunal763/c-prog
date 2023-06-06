/* first i will sort the array and then count the aaju baju digits and then delete them so that they can't make a pair with others*/
#include <bits/stdc++.h>
using namespace std;
int deleteElement(int array[], int length, int x){
    
        // Search x in array
        int i;
        for (i = 0; i < length; i++)
            if (array[i] == x)
                break;

        // If x found in array
        if (i < length){
        
            // reduce size of array and move all
            // elements on space ahead
            length = length - 1;
            for (int j = i; j < length; j++)
                array[j] = array[j + 1];
        }

    return 0;
}
int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    int len=n;
    for (int i = 0; i < n; i++){
    cin >> arr[i];
    }
    sort(arr, arr + n);

   
   for (int i = 0; i < len; i++)
    {
        if (arr[i] == arr[i+1])
        {
            count += 1;
           
            deleteElement(arr,len, arr[i]);
            deleteElement(arr,len,arr[i+1]);
        }

     
    }
    cout<<count/2;
    return 0;
}

