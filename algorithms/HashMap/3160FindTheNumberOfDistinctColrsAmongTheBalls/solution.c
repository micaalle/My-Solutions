typedef struct {
    int key;
    int value;
    UT_hash_handle hh;
} HashMap;

void insert(HashMap** map, int key, int value) {
    HashMap* entry;
    HASH_FIND_INT(*map, &key, entry);
    if (entry) {
        entry->value = value;
    } else {
        entry = (HashMap*)malloc(sizeof(HashMap));
        entry->key = key;
        entry->value = value;
        HASH_ADD_INT(*map, key, entry);
    }
}

int get(HashMap* map, int key, int defaultValue) {
    HashMap* entry;
    HASH_FIND_INT(map, &key, entry);
    return entry ? entry->value : defaultValue;
}

void erase(HashMap** map, int key) {
    HashMap* entry;
    HASH_FIND_INT(*map, &key, entry);
    if (entry) {
        HASH_DEL(*map, entry);
        free(entry);
    }
}

int* queryResults(int limit, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    if (queriesSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = queriesSize;
    int* ret = (int*)malloc(queriesSize * sizeof(int));
    HashMap* ballToColor = NULL; 
    HashMap* colorCount = NULL; 

    for (int i = 0; i < queriesSize; i++) {
        int ball = queries[i][0], color = queries[i][1];
        
        int oldColor = get(ballToColor, ball, -1);

        if (oldColor != -1) {
            int count = get(colorCount, oldColor, 0) - 1;
            if (count == 0) {
                erase(&colorCount, oldColor);
            } else {
                insert(&colorCount, oldColor, count);
            }
        }

        insert(&ballToColor, ball, color);
        
        insert(&colorCount, color, get(colorCount, color, 0) + 1);

        int distinctColors = HASH_COUNT(colorCount);
        ret[i] = distinctColors;
    }

    HashMap *current, *tmp;
    HASH_ITER(hh, ballToColor, current, tmp) {
        HASH_DEL(ballToColor, current);
        free(current);
    }
    HASH_ITER(hh, colorCount, current, tmp) {
        HASH_DEL(colorCount, current);
        free(current);
    }

    return ret;
}
