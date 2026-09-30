class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int area=0;
        while(i<j && j<n){
            area=max(area,min(heights[i],heights[j])*(j-i));
            if(heights[i]>=heights[j]){
                j--;
            }else{
                i++;
                // j++;
            }
        }
        return area;
    }
};
