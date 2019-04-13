package com.daily.coding.problem;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        System.out.println("For a staircase with 4 steps, there are " + ClimbingStairs1or2steps.ClimbStairs(4) + " unique ways you can climb the staircase");
        System.out.println("For a staircase with 5 steps, there are " + ClimbingStairs1or2steps.ClimbStairs(5) + " unique ways you can climb the staircase");
        System.out.println("For a staircase with 6 steps, there are " + ClimbingStairs1or2steps.ClimbStairs(6) + " unique ways you can climb the staircase");
        System.out.println("For a staircase with 10 steps, there are " + ClimbingStairs1or2steps.ClimbStairs(10) + " unique ways you can climb the staircase");
        System.out.println();

        List<Integer> steps = new ArrayList<>();
        steps.add(1);
        steps.add(2);

        System.out.println("For a staircase with 4 steps and X = {1, 2}, there are " + ClimbingStairsXsteps.ClimbStairs(4, steps) + " unique ways you can climb the staircase");
        System.out.println("For a staircase with 5 steps and X = {1, 2}, there are " + ClimbingStairsXsteps.ClimbStairs(5, steps) + " unique ways you can climb the staircase");
        System.out.println("For a staircase with 10 steps and X = {1, 2}, there are " + ClimbingStairsXsteps.ClimbStairs(10, steps) + " unique ways you can climb the staircase");
        System.out.println();

        steps.remove(1); // value 2
        steps.add(3);
        steps.add(5);

        // 11111,           -> 1
        // 311, 131, 113    -> 3
        // 5                -> 1
        System.out.println("For a staircase with 5 steps and X = {1, 3, 5}, there are " + ClimbingStairsXsteps.ClimbStairs(5, steps) + " unique ways you can climb the staircase");

        // 111111                       -> 1
        // 3111, 1311, 1131, 1113       -> 4
        // 33                           -> 1
        // 51, 15                       -> 2
        System.out.println("For a staircase with 6 steps and X = {1, 3, 5}, there are " + ClimbingStairsXsteps.ClimbStairs(6, steps) + " unique ways you can climb the staircase");

        System.out.println("For a staircase with 10 steps and X = {1, 3, 5}, there are " + ClimbingStairsXsteps.ClimbStairs(10, steps) + " unique ways you can climb the staircase");
    }
}
