package com.daily.coding.problem;

import java.util.List;

public class ClimbingStairsXsteps {

    static int ClimbStairs(int n, List<Integer> steps) {
        return ClimbStairsRecursive(0, n, steps);
    }

    static int ClimbStairsRecursive(int currentStep, int n, List<Integer> steps) {
        int retVal = 0;
        for (Integer step : steps) {
            if (currentStep + step < n) {
                retVal += ClimbStairsRecursive(currentStep + step, n, steps);
            } else if (currentStep + step == n) {
                retVal += 1;
            }
        }
        return retVal;
    }
}
