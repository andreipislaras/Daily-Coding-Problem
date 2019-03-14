#-------------------------------------------------------------------------------
# Name:        problem4.py
#
# Author:      Andrei Pislaras
#
# Created:     07/03/2019
#-------------------------------------------------------------------------------

def maxOfTwo(x, y):
    if x < 0:
        return x
    if y < 0:
        return y
    if x > y:
        return x
    return y

def maxOfThree(x, y, z):
    return maxOfTwo(x, maxOfTwo( y, z ))

def minOfTwo(x, y):
    if x < 0:
        return x
    if y < 0:
        return y
    if x < y:
        return x
    return y

def minOfThree(x, y, z):
    return minOfTwo(x, minOfTwo( y, z ))

# The point is to keep in the vector just min and next min
def getLowestPositiveInt(a):
    if len(a) < 2:
        return None
    else:
        while len(a) >= 4:
            min3 = minOfThree(a[0], a[1], a[2])
            if min3 < a[3]:
                a.remove(min3)
            else:
                a.remove(a[3])

    print(a) # [2, 5, 3]

    minOfThreeVal = minOfThree(a[0], a[1], a[2])
    a.remove(minOfThreeVal)
    minOfTwoVal = minOfTwo(a[0], a[1])
    a.remove(minOfTwoVal)

    if minOfTwoVal - minOfThreeVal is 1:
        if a[0] - minOfTwoVal is 1:
            return a[0] + 1
        else:
            return a[0] - 1
    else:
        return minOfThreeVal + 1

def main():
    a = [3, 4, -1, 1, 0]
    ret = getLowestPositiveInt(a)
    print(ret)

    a = [1, 2, 0, -1, 5, 3]
    ret = getLowestPositiveInt(a)
    print(ret)

    a = [-1, -2, -3, -7]
    ret = getLowestPositiveInt(a)
    print(ret)

    a = [3, 4, -1, 1, 0, 2]
    ret = getLowestPositiveInt(a)
    print(ret)

    a = [3, 4, -1, 1]
    ret = getLowestPositiveInt(a)
    print(ret)

    a = [1, 2, 0]
    ret = getLowestPositiveInt(a)
    print(ret)



if __name__ == '__main__':
    main()
