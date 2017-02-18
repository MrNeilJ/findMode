

#include <iostream>
#include <vector>


int findMode(int array[], int arraySize);

int main() {
    /**************************
     * TESTS THAT NEED TO PASS
     **************************/

    // All unique values (one of each)
    int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};


    int testArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    findMode(testArray, 8);

    return 0;

}

int findMode(int inputArray[], int arraySize)
{
    // Add a counter for
}


/*
int findMode(int inputArray[], int arraySize) {
    std::vector<int> storageVect;
    int newValues = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (storageVect.empty())
        {
            storageVect.push_back(inputArray[i]);
            newValues++;
        }
        else
        {
            for(i; )
            for (int j = 0; i < newValues; j++){
                storageVect.push_back(inputArray[i]);
                newValues++;

            }
        }
    }
}

 */