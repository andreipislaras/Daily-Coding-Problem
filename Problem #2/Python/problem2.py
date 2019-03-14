#-------------------------------------------------------------------------------
# Name:        problem2.py
#
# Author:      Andrei Pislaras
#
# Created:     07/03/2019
#-------------------------------------------------------------------------------


inputArray = [1, 2, 3, 4, 5]

def solution1():
    results = []
    p = 1
    for x in inputArray:
        p = p * x

    for x in inputArray:
        temp = p/x
        results.append(temp)

    print(results)

#{              1,         a[0],    a[0]*a[1],    a[0]*a[1]*a[2],  } ---> belowArray
#{ a[1]*a[2]*a[3],    a[2]*a[3],         a[3],                 1,  } ---> aboveArray
def solution2():
    belowArray = [1]
    aboveArray = [1]
    outputArray = []

    n = len(inputArray) - 1
    r = range(n)
    for i in r:
        temp1 = belowArray[i] * inputArray[i]
        belowArray.append(temp1)

        temp2 = aboveArray[0] * inputArray[n - i]
        aboveArray.insert(0, temp2)

    for i in range(len(inputArray)):
        outputArray.append(belowArray[i] * aboveArray[i])

    print(belowArray)
    print(aboveArray)
    print(outputArray)

if __name__ == '__main__':
    solution2()