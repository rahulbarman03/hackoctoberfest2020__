#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

BinaryTreeNode<int> *Take_Input_Level_Wise()
{
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int leftChildData;
        cout << "Enter left child value of " << front->data << " : " << endl;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        int rightChildData;
        cout << "Enter right child value of " << front->data << " : " << endl;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void print_Level_Wise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << " : ";

        if (front->left != NULL)
        {
            cout << "L: " << front->left->data << " , ";
            pendingNodes.push(front->left);
        }
        else
        {
            cout << "L: " << -1 << " , ";
        }

        if (front->right != NULL)
        {
            cout << "R: " << front->right->data;
            pendingNodes.push(front->right);
        }
        else
        {
            cout << "R: " << -1;
        }
        cout << endl;
    }
}

int Height(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    if (leftHeight > rightHeight)
    {
        return 1 + leftHeight;
    }
    else
    {
        return 1 + rightHeight;
    }
}

int main()
{
    BinaryTreeNode<int> *root = Take_Input_Level_Wise();
    cout<<endl;
    cout<<"Height of Binary tree is : "<<endl;
    cout<<Height(root);
    cout<<endl;
    print_Level_Wise(root);
    return 0;
}
