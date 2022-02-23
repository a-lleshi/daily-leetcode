class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // Comebine two arrays and sort them from smallest to largest
        vector<int> nums3;

        while (nums1.size() > 0 && nums2.size() > 0) {
            if (nums1[0] < nums2[0]) {
                nums3.push_back(nums1[0]);
                nums1.erase(nums1.begin());
            }
            else if (nums1[0] > nums2[0]) {
                nums3.push_back(nums2[0]);
                nums2.erase(nums2.begin());
            }
            else {
                nums3.push_back(nums1[0]);
                nums3.push_back(nums2[0]);
                nums1.erase(nums1.begin());
                nums2.erase(nums2.begin());
            }
        }

        // Add the rest of the numbers
        while (nums1.size() > 0) {
            nums3.push_back(nums1[0]);
            nums1.erase(nums1.begin());
        }

        while (nums2.size() > 0) {
            nums3.push_back(nums2[0]);
            nums2.erase(nums2.begin());
        }
        
        // Size of nums3
        int size = nums3.size();

        // Check if size is odd or even
        if (size % 2 == 0) {
            return (nums3[size / 2] + nums3[size / 2 - 1]) / 2.0;
        } else {
            return nums3[size / 2];
        }
            
        
    }
};