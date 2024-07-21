public class ArrayManipulation {
    public static long arrayManipulation(int n, int[][] queries) {
        long[] arr = new long[n + 1];
        for (int[] query : queries) {
            int a = query[0], b = query[1], k = query[2];
            arr[a] += k;
            if (b + 1 <= n) arr[b + 1] -= k;
        }
        long max = 0, sum = 0;
        for (long value : arr) {
            sum += value;
            if (sum > max) max = sum;
        }
        return max;
    }
}
