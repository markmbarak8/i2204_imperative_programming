#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Helper function to check if two strings have the same characters
bool sameChars(char* s1, char* s2, int len) {
    int count[26] = {0};
    
    for (int i = 0; i < len; i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}

// Memoization structure to store computed results
typedef struct {
    char* s1;
    char* s2;
    bool result;
} MemoEntry;

#define MAX_MEMO 1000
MemoEntry memo[MAX_MEMO];
int memoSize = 0;

// Helper function to check memo
bool checkMemo(char* s1, char* s2, int len, bool* found) {
    for (int i = 0; i < memoSize; i++) {
        if (strncmp(memo[i].s1, s1, len) == 0 && 
            strncmp(memo[i].s2, s2, len) == 0) {
            *found = true;
            return memo[i].result;
        }
    }
    *found = false;
    return false;
}

// Helper function to add to memo
void addToMemo(char* s1, char* s2, int len, bool result) {
    if (memoSize < MAX_MEMO) {
        memo[memoSize].s1 = malloc(len + 1);
        memo[memoSize].s2 = malloc(len + 1);
        strncpy(memo[memoSize].s1, s1, len);
        strncpy(memo[memoSize].s2, s2, len);
        memo[memoSize].s1[len] = '\0';
        memo[memoSize].s2[len] = '\0';
        memo[memoSize].result = result;
        memoSize++;
    }
}

// Recursive function to check if s2 is scrambled version of s1
bool isScrambleHelper(char* s1, char* s2, int len) {
    // Check memo first
    bool found;
    bool memoResult = checkMemo(s1, s2, len, &found);
    if (found) {
        return memoResult;
    }
    
    // Base case: strings are equal
    if (strncmp(s1, s2, len) == 0) {
        addToMemo(s1, s2, len, true);
        return true;
    }
    
    // Check if characters are the same
    if (!sameChars(s1, s2, len)) {
        addToMemo(s1, s2, len, false);
        return false;
    }
    
    // Try all possible splits
    for (int i = 1; i < len; i++) {
        // Case 1: No swap - check left with left and right with right
        if (isScrambleHelper(s1, s2, i) && 
            isScrambleHelper(s1 + i, s2 + i, len - i)) {
            addToMemo(s1, s2, len, true);
            return true;
        }
        
        // Case 2: Swap occurred - check left with right and right with left
        if (isScrambleHelper(s1, s2 + len - i, i) && 
            isScrambleHelper(s1 + i, s2, len - i)) {
            addToMemo(s1, s2, len, true);
            return true;
        }
    }
    
    addToMemo(s1, s2, len, false);
    return false;
}

// Main function to check if s2 is scrambled version of s1
bool isScramble(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 != len2) {
        return false;
    }
    
    // Reset memo for new call
    memoSize = 0;
    
    return isScrambleHelper(s1, s2, len1);
}

// Function to scramble a string (part 1)
void scrambleString(char* s, char* result, int start, int end) {
    int len = end - start;
    
    if (len <= 1) {
        if (len == 1) {
            result[0] = s[start];
        }
        return;
    }
    
    // Choose random split point
    int split = start + (rand() % (len - 1)) + 1;
    
    // Randomly decide to swap or not
    if (rand() % 2 == 0) {
        // No swap
        scrambleString(s, result, start, split);
        scrambleString(s, result + (split - start), split, end);
    } else {
        // Swap
        scrambleString(s, result + (end - split), split, end);
        scrambleString(s, result, start, split);
    }
}

// Wrapper function for scrambling
void getScrambledString(char* s, char* result) {
    int len = strlen(s);
    scrambleString(s, result, 0, len);
    result[len] = '\0';
}

// Function to free memo memory
void freeMemo() {
    for (int i = 0; i < memoSize; i++) {
        free(memo[i].s1);
        free(memo[i].s2);
    }
    memoSize = 0;
}
// Test function
int main() {
    // Test cases
    char* testCases[][2] = {
        {"great", "rgeat"},
        {"abcde", "caebd"},
        {"a", "a"},
        {"ab", "ba"}
    };
    
    int numTests = sizeof(testCases) / sizeof(testCases[0]);
    
    printf("Testing isScramble function:\n");
    for (int i = 0; i < numTests; i++) {
        char* s1 = testCases[i][0];
        char* s2 = testCases[i][1];
        bool result = isScramble(s1, s2);
        printf("isScramble(\"%s\", \"%s\") = %s\n", s1, s2, result ? "true" : "false");
        freeMemo(); // Free memo after each test
    }
    
    printf("\nTesting scramble function:\n");
    char original[] = "great";
    char scrambled[6]; // "great" has length 5 + null terminator
    
    // Seed random number generator
    srand(42); // Use fixed seed for reproducible results
    
    getScrambledString(original, scrambled);
    printf("Original: %s\n", original);
    printf("Scrambled: %s\n", scrambled);
    
    // Check if scrambled version is valid
    bool isValid = isScramble(original, scrambled);
    printf("Is valid scramble: %s\n", isValid ? "true" : "false");
    
    freeMemo();
    return 0;
}