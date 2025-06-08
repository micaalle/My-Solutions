typedef struct Node {
    int x;
    int y;
    int height;
    struct Node* left;
    struct Node* right;
} Node;

int height(Node* node) {
    return node ? node->height : 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* newNode(int x, int y) {
    Node* node = malloc(sizeof(Node));
    node->x = x;
    node->y = y;
    node->height = 1;
    node->left = node->right = NULL;
    return node;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* tmp = x->right;
    x->right = y;
    y->left = tmp;
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* tmp = y->left;
    y->left = x;
    x->right = tmp;
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;
    return y;
}

int getAVL(Node* node) {
    if (!node) return 0;
    return height(node->left) - height(node->right);
}

Node* insert(Node* root, int key, int val) {
    if (!root)
        return newNode(key, val);
    if (key < root->x)
        root->left = insert(root->left, key, val);
    else if (key > root->x)
        root->right = insert(root->right, key, val);
    else {
        if (val > root->y)
            root->y = val;
        return root;
    }
    root->height = 1 + max(height(root->left), height(root->right));
    int AVL = getAVL(root);

    if (AVL > 1 && key < root->left->x)
        return rightRotate(root);

    if (AVL < -1 && key > root->right->x)
        return leftRotate(root);

    if (AVL > 1 && key > root->left->x) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (AVL < -1 && key < root->right->x) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorder(Node* root, int* arr, int* idx) {
    if (!root) return;
    inorder(root->left, arr, idx);
    arr[(*idx)++] = root->y;
    inorder(root->right, arr, idx);
}

void freeTree(Node* root) {
    if (!root) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int maxSumDistinctTriplet(int* x, int xSize, int* y, int ySize) {
    if (xSize != ySize) return -1;
    Node* root = NULL;
    for (int i = 0; i < xSize; ++i) {
        root = insert(root, x[i], y[i]);
    }
    int* val = malloc(sizeof(int) * xSize);
    int cnt = 0;
    inorder(root, val, &cnt);
    if (cnt < 3) {
        free(val);
        freeTree(root);
        return -1;
    }
    int val1 = 0, val2 = 0, val3 = 0;
    for (int i = 0; i < cnt; ++i) {
        int tmp = val[i];
        if (tmp > val1) {
            val3 = val2;
            val2 = val1;
            val1 = tmp;
        } else if (tmp > val2) {
            val3 = val2;
            val2 = tmp;
        } else if (tmp > val3) {
            val3 = tmp;
        }
    }
    free(val);
    freeTree(root);
    return val1 + val2 + val3;
}
