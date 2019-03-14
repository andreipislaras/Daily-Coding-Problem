#-------------------------------------------------------------------------------
# Name:        problem3.py
#
# Author:      Andrei Pislaras
#
# Created:     07/03/2019
#-------------------------------------------------------------------------------

import json

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def serializeDict(root):
    sDict = dict()
    if root != None:
        sDict["val"] = root.val
        if root.left != None:
            sDict["left"] = serialize(root.left)
        if root.right != None:
            sDict["right"] = serialize(root.right)

    return sDict

def serialize(root):
    return json.dumps(serializeDict(root))

def deserialize(s):
    nodeJson = json.loads(s)
    node = None
    if nodeJson != None:
        node = Node(nodeJson["val"])
        if "left" in nodeJson:
            node.left = deserialize(nodeJson["left"])
        if "right" in nodeJson:
            node.right = deserialize(nodeJson["right"])
    return node

def main():
    node = Node('root', Node('left', Node('left.left')), Node('right'))
    s = serialize(node)
    print(s)

    assert deserialize(serialize(node)).left.left.val == 'left.left'

if __name__ == '__main__':
    main()
