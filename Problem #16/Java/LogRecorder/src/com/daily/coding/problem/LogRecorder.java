package com.daily.coding.problem;

import java.util.LinkedList;

public class LogRecorder {

    private int mSizeOfList;
    private LinkedList<Integer> mList;

    public LogRecorder(int mSizeOfList) {
        this.mSizeOfList = mSizeOfList;
        this.mList = new LinkedList<Integer>();
    }

    public void recordLog(Integer logID) {
        if (mList.size() < mSizeOfList) { // complexity of a size() call on a LinkedList is O(1); it stores the size as a variable
            mList.addFirst(logID); // complexity is O(1)
        } else {
            mList.removeLast(); // complexity is O(1); the LinkedList maintains pointers both to the first and last node in the list
            mList.addFirst(logID);
        }
    }

    public Integer getLast() {
        return mList.getFirst();
    }

    public int getListSize() {
        return mList.size();
    }
}
