package com.daily.coding.problem;

public class Main {

    public static void main(String[] args) {
        LogRecorder logRecorder = new LogRecorder(10);

        for (int i = 0; i < 15; i++) {
            logRecorder.recordLog(i);
        }

        System.out.println("Last recorded log is " + logRecorder.getLast());
        System.out.println("Size of list is " + logRecorder.getListSize());
    }
}
