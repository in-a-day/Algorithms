/*
 * 双指针
 */
class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        for (int ii = 0; ii < A.length; ii++) {
            int j = 0, k = A[ii].length - 1, temp = 0;
            while (j <= k && j <= A[ii].length / 2) {
                if (j == k) {
                    A[ii][j] ^= 1;
                } else {
                    A[ii][j] ^= 1;
                    A[ii][k] ^= 1;
                    // temp = A[ii][j];
                    // A[ii][j] = A[ii][k];
                    // A[ii][k] = temp;
                    // 异或交换值
                    A[ii][j] = A[ii][j] ^ A[ii][k];
                    A[ii][k] = A[ii][j] ^ A[ii][k];
                    A[ii][j] = A[ii][j] ^ A[ii][k];
                }
                j++;
                k--;
            }
        }
        return A;
    }
}
