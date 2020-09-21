#!/usr/bin/python
from sys import stdin, stdout

class Node():
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def insert(self, data):
        if self.data:
            if data <= self.data:
                if self.left == None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            else:
                if self.right == None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
                
    def printInOrder(self):
        if self.left:
            self.left.printInOrder()
        if self.right or self.left:
            print self.data
        if self.right:
            self.right.printInOrder()

def main():
    n = int(stdin.readline())
    for i in xrange(n):
        num = int(stdin.readline())
        if i == 0:
            root = Node(num)
        else:
            root.insert(num)
    
    root.printInOrder()

if __name__ == "__main__":
    main()
