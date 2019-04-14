package com.daily.coding.problem;

public class Main {

    public static void main(String[] args) {
        System.out.println("Longest substring length for abcba and k = 2 is " + DistinctCharacters.GetLongestSubstring("abcba", 2));
        System.out.println("Longest substring length for aaaaaaaa and k = 2 is " + DistinctCharacters.GetLongestSubstring("aaaaaaaa", 2));
        System.out.println("Longest substring length for abcba and k = 3 is " + DistinctCharacters.GetLongestSubstring("abcba", 3));
        System.out.println("Longest substring length for abbccbbadddd and k = 3 is " + DistinctCharacters.GetLongestSubstring("abbccbbadddd", 3));
    }
}
