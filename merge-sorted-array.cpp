class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1.begin(), nums1.begin() + m);

        int ind1 = 0;
        int ind2 = 0;
        int i = 0;

        while (ind1 < m && ind2 < n)
        {
            cout << ind1 <<   << ind2 << endl;
            if (temp[ind1] <= nums2[ind2])
                nums1[i++] = temp[ind1++];
            else nums1[i++] = nums2[ind2++];
        }

        while (ind1 < m)
            nums1[i++] = temp[ind1++];
        
        while (ind2 < n)
            nums1[i++] = nums2[ind2++];
        
        return;
    }
};
