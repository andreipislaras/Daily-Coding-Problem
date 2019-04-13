package com.daily.coding.problem;

import java.util.ArrayList;
import java.util.List;

public class ClimbingStairs1or2steps {

    static int ClimbStairs(int n) {
        if (n <= 1) {
            return 1;
        }

        List<Integer> ways = new ArrayList<>();
        ways.add(0, 1);
        ways.add(1, 1);
        for (int i = 2; i <= n; ++i) {
            ways.add(i, ways.get(i - 1) + ways.get(i - 2));
        }
        return ways.get(n);
    }
}
