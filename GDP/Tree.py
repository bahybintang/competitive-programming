#!/usr/bin/python
import random

class Node():
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def height(self):
        rightHeight = leftHeight = 0
        if self.right:
            rightHeight = self.right.height()
        if self.left:
            leftHeight = self.left.height()
        return max(rightHeight, leftHeight) + 1

    def printInOrder(self):
        if self.left:
            self.left.printInOrder()
        print self.data,
        if self.right:
            self.right.printInOrder()

    def printPostOrder(self):
        if self.left:
            self.left.printPostOrder()
        if self.right:
            self.right.printPostOrder()
        print self.data,

    def printPreOrder(self):
        print self.data,
        if self.left:
            self.left.printPreOrder()
        if self.right:
            self.right.printPreOrder()

    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left == None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            else:
                if self.right == None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
    
    def findval(self, lkpval):
        if lkpval < self.data:
            if self.left is None:
                return False 
            return self.left.findval(lkpval)
        elif lkpval > self.data:
            if self.right is None:
                return False
            return self.right.findval(lkpval)
        else:
            return True

for i in xrange(26):
    if i == 0:
        root = Node(random.randint(0, 100))
    else:
        root.insert(random.randint(0,100))

print root.height()

# root.printInOrder()
# print ""
# root.printPostOrder()
# print ""
# root.printPreOrder()


