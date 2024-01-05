 int maxArea(vector<int>& height) {
    int left_pointer = 0;
    int right_pointer = height.size() - 1;
    int maxWater = 0;

    while (left_pointer < right_pointer) {
        int width = right_pointer - left_pointer;

        int container_height = min(height[left_pointer], height[right_pointer]);

        int current_water = width * container_height;

        maxWater = max(maxWater, current_water);

        if (height[left_pointer] > height[right_pointer]) {
            right_pointer -= 1;
        } else {
            left_pointer += 1;
        }
    }
    return maxWater;
}