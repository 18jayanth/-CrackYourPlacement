class KthLargest {
public:

    KthLargest(int k, vector<int>& nums) {
          this->k = k;
        for (int i = 0; i < nums.size(); i++) {
            minHeap.push(nums[i]);
        }
        // Keep only the k largest elements
        while (minHeap.size() > this->k) {
            minHeap.pop();
        
    }
    }
    
    int add(int val) {
         minHeap.push(val);
        // If heap size exceeds k, remove the smallest element
        if (minHeap.size() > k) {
            minHeap.pop();
        }
        // Return the current kth largest element
        return minHeap.top();
        
    }
    private:
    int k;
    priority_queue<int, vector<int>, greater<int>> minHeap;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */