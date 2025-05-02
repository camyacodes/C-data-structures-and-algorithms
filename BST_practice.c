#include <stdio.h>
#include <stdlib.h>

typedef struct BSTNode_s {
    int data;
    struct BSTNode_s *left;
    struct BSTNode_s *right;
} BSTNode;

typedef struct BSTree_s {
    BSTNode *root;
} BSTree;

BSTree *create_tree(){
    BSTree *tree = malloc(sizeof(BSTree));

    tree->root = NULL;

    return tree;
}

int is_empty(BSTree *tree){
    if(tree->root == NULL){
        return 1;
    } else {
        return 0;
    }
}

BSTNode *create_node(int val){
    BSTNode *node = malloc(sizeof(BSTNode));

    node->data = val;
    node->left = NULL;
    node->right= NULL;

    return node;
}

void insert(BSTree *tree, int val){
    // check if empty
    if(is_empty(tree)){
        tree->root = create_node(val);
        return;
    }

    BSTNode *ptr = tree->root;

    BSTNode *parent = NULL;

    // traverse bst until right empty spot is found
    while(ptr != NULL){
        parent = ptr;

        if(val<ptr->data){
            ptr = ptr->left;
        } else {
            ptr = ptr->right;
        }
    }

    // we found the spot now we need to add val at correct child placement
    if(val<parent->data){
        parent->left = create_node(val);
    } else {
        parent->right = create_node(val);
    }
}

void inorder(BSTNode *root){
    if(root == NULL){
        return;
    }

    if(root->left != NULL){
        inorder(root->left);
    }

    printf("%d\n", root->data);

    if(root->right != NULL){
        inorder(root->right);
    }
}

void preorder(BSTNode *root){
    if(root == NULL){
        return;
    }

    printf("%d\n", root->data);

    if(root->left != NULL){
        preorder(root->left);
    }

    if(root->right != NULL){
        preorder(root->right);
    }
}
void postorder(BSTNode *root){
    if(root == NULL){
        return;
    }

    if(root->left != NULL){
        postorder(root->left);
    }

    if(root->right != NULL){
        postorder(root->right);
    }

    printf("%d\n", root->data);
}

int main() {
    // create tree
    BSTree *tree = create_tree();

    // insert nodes
    insert(tree, 50);
    insert(tree, 20);
    insert(tree, 30);
    insert(tree, 10);
    insert(tree, 5);
    insert(tree, 90);
    insert(tree, 100);

    // In-order traversal
    printf("In-order traversal:\n");
    inorder(tree->root);

    // pre-order traversal
    printf("Pre-order traversal:\n");
    preorder(tree->root);

    // post-order traversal
    printf("Post-order traversal:\n");
    postorder(tree->root);





    return 0;
}

