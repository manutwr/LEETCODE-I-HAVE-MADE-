class Solution {
public:
     void reverse (vector <int> & arr, int i, int j){  
        while (i<j){  // checking .....
            swap ( arr[i], arr[j]); // swap i and j
            i++ ; // iko ++
            j--;
        }
     }

    void rotate(vector<int>& arr, int k) {
        int n = arr.size(); // n hoga aray size ke barabar
        k= k%n;  // overflow nah ho code baar baar rotate h ho array ni to woh fir se vaisa hi bn jayega jaisa phle tha 
        reverse (arr, 0 , n-k-1); // 
        reverse ( arr , n-k ,n-1);
        reverse (arr, 0, n-1);
    }
};
