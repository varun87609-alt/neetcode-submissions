class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int m=matrix[mid].size();
            int loww=0;
            int highh=m-1;
            if(target<matrix[mid][loww]){
                high=mid-1;
            }else if(target>matrix[mid][highh]){
                low=mid+1;
            }else{
                while(loww<=highh){
                    int midd=(loww+highh)/2;
                    if(matrix[mid][midd]==target){
                        return true;
                    }else if(matrix[mid][midd]>target){
                        highh=midd-1;
                    }else{
                        loww=midd+1;
                    }
                    
                }
                return false;
            }
        }
        return false;
    }
};
