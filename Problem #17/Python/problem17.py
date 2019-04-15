#-------------------------------------------------------------------------------
# Name:        problem17.py
#
# Author:      Andrei Pislaras
#
# Created:     15/04/2019
#-------------------------------------------------------------------------------

def isFile(strPath):
    if "." in strPath:
        return True
    else:
        return False

def getSizePath(listPath):
    if isFile(listPath[-1]) == False:
        return 0

    strPath = ""
    for path in listPath:
        strPath += path + "/"
    strPath = strPath[:-1]
    print(strPath)
    return len(strPath)

def getLongestAbsolutePath(strPath):
    #print(strPath)
    maxSize = 0
    words = strPath.split("\n")
    #print(words)
    if words.index('dir') is not 0:
        print("Invalid data!")
        return maxSize
    else:
        words.remove("dir")

    path = list()
    path.append("dir")

    lastDepth = 0
    for word in words:
        depth = word.count("\t")
        name = word[depth:]
        if lastDepth < depth:
            lastDepth = depth
            path.append(name)
        elif lastDepth > depth:
            pathSize = getSizePath(path)
            if pathSize > maxSize:
                maxSize = pathSize

            lastDepth = 0
            path.clear()
            path.append("dir")
            path.append(name)
        else:
            pathSize = getSizePath(path)
            if pathSize > maxSize:
                maxSize = pathSize

            path = path[:-1]
            path.append(name)

    pathSize = getSizePath(path)
    if pathSize > maxSize:
        maxSize = pathSize

    return maxSize


if __name__ == '__main__':
    print("main")
    path = 'dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext'
    print("Longest absolute path is " + str(getLongestAbsolutePath(path)) + "\n")

    path = 'dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext'
    print("Longest absolute path is " + str(getLongestAbsolutePath(path)) + "\n")