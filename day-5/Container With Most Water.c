int maxArea(int* height, int heightSize) {
    int max_area = 0, l = 0, r = heightSize - 1;
    while (l < r) {
        int area = fmin(height[l], height[r]) * (r - l);
        max_area = fmax(max_area, area);
        if (height[l] < height[r]) l++;
        else r--;
    }
    return max_area;
}
