typedef struct {
    int * ret;
    int size;
    int capacity;
} ProductOfNumbers;


ProductOfNumbers* productOfNumbersCreate() {
    ProductOfNumbers* obj = (ProductOfNumbers*)malloc(sizeof(ProductOfNumbers));
    obj->capacity = 12;
    obj->ret = (int*)malloc(obj->capacity * sizeof(int));
    obj->size = 0;
    obj->ret[0] = 1; 
    return obj;
}

void productOfNumbersAdd(ProductOfNumbers* obj, int num) {
    if (obj->size + 1 >= obj->capacity) {
        obj->capacity *= 2; // Double the capacity
        obj->ret = (int*)realloc(obj->ret, obj->capacity * sizeof(int));
    }

    if (num == 0) {
        obj->size = 0; // Reset on zero
        obj->ret[0] = 1;
    } else {
        obj->ret[obj->size + 1] = obj->ret[obj->size] * num;
        obj->size++;
    }
}

int productOfNumbersGetProduct(ProductOfNumbers* obj, int k) {
    if (k > obj->size) {
        return 0;
    }
    return obj->ret[obj->size] / obj->ret[obj->size - k];
}

void productOfNumbersFree(ProductOfNumbers* obj) {
    free(obj->ret);
    free(obj);
}
