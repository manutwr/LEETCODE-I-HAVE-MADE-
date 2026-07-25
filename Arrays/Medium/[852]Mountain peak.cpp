class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1, end = arr.size()-2;

        while (start<=end){
           int  mid = start + (end- start )/2;
            
             // cheacking if mid to nahi hai peak element 
            if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
            {
                return mid;

            } else if (arr[mid-1]<arr[mid]) // for right side search bcz element is smaller than mid mtlb bada element khi right me exist karega 
            {
                start = mid +1; // seaerrch in right side of array 
            }
            else{
                end = mid -1; //end ko mid -1 kr do
            }
        }
        return -1; // jab kuch na mile to -1 return kr do
    }
};
