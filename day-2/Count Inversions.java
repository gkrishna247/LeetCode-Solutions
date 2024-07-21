public class CountInversions {
    public static long countInversions(int[] arr) {
        return mergeSort(arr, 0, arr.length - 1);
    }

    private static long mergeSort(int[] arr, int left, int right) {
        if (left >= right) return 0;
        int mid = (left + right) / 2;
        long inv = mergeSort(arr, left, mid) + mergeSort(arr, mid + 1, right);
        return inv + merge(arr, left, mid, right);
    }

    private static long merge(int[] arr, int left, int mid, int right) {
        int[] temp = new int[right - left + 1];
        int i = left, j = mid + 1, k = 0;
        long inv = 0;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) temp[k++] = arr[i++];
            else {
                temp[k++] = arr[j++];
                inv += (mid - i + 1);
            }
        }
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];
        System.arraycopy(temp, 0, arr, left, temp.length);
        return inv;
    }
}
