#-------------------------------------------------------------------------------
# Name:        problem1.py
#
# Author:      Andrei Pislaras
#
# Created:     06/03/2019
#-------------------------------------------------------------------------------

def solution1(nums, k):
    nums.sort()

    if len(nums) > 2:
        first = 0
        second = 1
        # k = 17
        # nums = [ 3, 7, 10, 15 ]
        while first >= 0 and second <= len(nums):
            if (nums[first] + nums[second]) < k:
                first = first + 1
                second = second + 1
            elif (nums[first] + nums[second]) > k:
                first = first - 1
            else:
                return True

    return False

def solution2(nums, k):
    keyDict = dict()
    for nr in nums:
        temp = k - nr
        if temp > 0 and keyDict.get(temp) != None:
            return True
        keyDict[nr] = 1
    return False

if __name__ == '__main__':
    k = 33

    nums = [1, 4, 9, 5, 10, 15, 3, 200]
    print(solution1(nums, k))

    nums = [1, 4, 9, 5, 10, 15, 3, 200]
    print(solution2(nums, k))

    k = 22
    nums = [10, 15, 3, 7]
    print(solution1(nums, k))