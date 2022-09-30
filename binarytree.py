class Queue:

    def __init__(self):
        self._A = []

    def __len__(self):
        return len(self._A)

    def is_empty(self):
        return len(self._A)==0

    def enqueue(self, item):
        self._A.append(item)

    def dequeue(self):
        if self.is_empty():
            return ("Queue is empty")
        return self._A.pop(0)

    def first(self):
        if self.is_empty():
            return ("Queue is empty")
        return self._A[0]
class Node:
    def __init__(self,data):
        self.right=None
        self.left=None
        self.data=data

class BinaryTree:
    def __init__(self):
        self.root=None
        
    def inorder_traversal(self, root):
        if root==None:
            return
        else:
            self.inorder_traversal(root.left)
            print(root.data)
            self.inorder_traversal(root.right)

    def preorder_traversal(self, root):
        if root == None:
            return
        else:
            print(root.data)
            self.preorder_traversal(root.left)
            self.preorder_traversal(root.right)

    def postorder_traversal(self, root):
        if root == None:
            return
        else:
            self.postorder_traversal(root.left)
            self.postorder_traversal(root.right)
            print(root.data)

    #level order traversal or breadth first order traversal
    def levelorder_traversal(self,root):
        Q=Queue()
        if root!=None:
            Q.enqueue(root)
        
        while(not Q.is_empty):
            temp=Q.dequeue()
            print(temp.data)
            if(temp.left is not None):
                Q.enqueue(temp.left)

            if(temp.right is not None):
                Q.enqueue(temp.right)



T = BinaryTree()

T.root = Node(10)
T.root.left = Node(20)
T.root.right = Node(30)
T.root.left.left = Node(40)
T.root.left.right = Node(50)
T.root.right.right = Node(60)
print("Inorder traversal of tree")
T.inorder_traversal(T.root)
print("Preorder traversal of tree")
T.preorder_traversal(T.root)
print("Postorder traversal of tree")
T.postorder_traversal(T.root)
print("Levelorder traversal of tree")
T.levelorder_traversal(T.root)

