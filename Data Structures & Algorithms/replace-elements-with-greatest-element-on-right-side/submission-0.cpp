class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            int ele=0;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>ele)
                {
                    ele=arr[j];
                }
            }
            arr[i]=ele;
        }
        arr[n-1]=-1;
        return arr;
    }
    
};