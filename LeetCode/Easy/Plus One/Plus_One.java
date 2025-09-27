class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        
        // 1. Iterate from Right to Left
        for (int i = n - 1; i >= 0; i--) {
            
            // 2. Case 1: Digit is Less Than 9
            if (digits[i] < 9) {
                digits[i]++; // Increment the current digit
                return digits; // No carry-over, return the result
            }
            
            // 3. Case 2: Digit is 9
            // Set it to 0 and continue to the left to handle the carry
            digits[i] = 0; 
        }
        
        // 4. Case 3: All Digits Were 9 (e.g., [9, 9] -> [1, 0, 0])
        // We need a new array with an extra digit
        int[] newDigits = new int[n + 1];
        newDigits[0] = 1; // The carry-over becomes the new most significant digit
        // The remaining elements of newDigits are already 0
        
        return newDigits;
    }
}