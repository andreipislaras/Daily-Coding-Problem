package com.daily.coding.problem;

import java.util.HashSet;
import java.util.Set;

public class DistinctCharacters {

    /*
    * s = abcba
    * k = 2
    *
    * maxLength = 1
    * "ab" isDistinct? Yes
    *                  -> maxLength = 2
    *                  -> "abc" isDistinct? No => start = 1
    *
    * "bcb" isDistinct? Yes
    *                  -> maxLength = 3
    *                  -> "bcba" isDistinct? No => start = 2
    *                                           => start + maxLength + 1 > length of s
    *                                                                                 => stop
    *
    * */
    public static int GetLongestSubstring(String s, int k) {
        int maxLength = 1;
        int start = 0;
        while (start < s.length() && maxLength + start + 1 <= s.length()) {
            String subStr = s.substring(start, maxLength + start + 1);
            //System.out.println(subStr);
            if (isDistinct(subStr, k)) {
                maxLength++;
            } else {
                start++;
            }
        }
        return maxLength;
    }

    public static boolean isDistinct(String s, int k) {
        boolean retVal = true;
        Set<String> hashSet = new HashSet<String>();
        for (int i = 0; i < s.length(); i++) {
            String subStr = s.substring(i, i+1);
            hashSet.add(subStr);
            if (hashSet.size() > k) {
                retVal = false;
                break;
            }
        }
        return retVal;
    }
}
