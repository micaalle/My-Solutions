bool* checkIfPrerequisite(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    *returnSize = queriesSize;
    bool * ret = malloc(sizeof(bool) * queriesSize);


    // create adjacency matrix
    bool ** reqCk = malloc(sizeof(bool**) * numCourses);
    for(int i = 0; i < numCourses; i++){
        reqCk[i] = calloc(numCourses, sizeof(bool*)); // initialize the matrix to false
    }

    for (int i = 0; i < prerequisitesSize; i++) {   // set the pre req courses to true 
            reqCk[prerequisites[i][0]][prerequisites[i][1]] = true;
    }

    for(int k = 0; k < numCourses; k++){            // main part which utilizes the Floyd Warshall algorithm to determine if i is a pre req of j
        for(int i = 0; i < numCourses; i++){        // checks if there is a course k which connects them
            for(int j = 0; j < numCourses; j++){    // if course i has a prerequisite k and course k has a prerequisite j then course i  becomes a prerequisite of course j and reqCk[i][j] is set to true
                if(reqCk[i][k] && reqCk[k][j]){
                    reqCk[i][j] = true;
                }
            }
        }
    }

    for (int i = 0; i < queriesSize; i++) {         // loop for each query and set true or false as the reqCk has stored
        ret[i] = reqCk[queries[i][0]][queries[i][1]];
    }

    return ret;

}
