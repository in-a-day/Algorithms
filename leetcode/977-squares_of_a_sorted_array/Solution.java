class Solution {
    public int[] sortedSquares(int[] A) {
        int lenA = A.length;
        int i = 0, j = lenA - 1;
        int[] res = new int[lenA];
        for (int k = lenA - 1; k >= 0; k--) {
            if (A[i]*A[i] > A[j]*A[j]) {
                res[k] = A[i]*A[i];
                i++;
            } else {
                res[k] = A[j]*A[j];
                j--;
            }
        }
        return res;
    }
}