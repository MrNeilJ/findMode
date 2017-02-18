

#include <iostream>
#include <vector>


int findMode(int array[], int arraySize);

int main() {
    /**************************
     * TESTS THAT NEED TO PASS
     **************************/

    // All unique values (one of each)
    int testArrayA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};

    // One double value
    int testArrayB[10] = {1, 2, 3, 4, 1, 6, 7, 8, 9, 10,};

    // Two triple values
    int testArrayC[10] = {1, 1, 2, 4, 1, 6, 2, 8, 2, 10,};

    // All double values
    int testArrayD[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5,};

    // Run the test
    findMode(testArrayA, 10);
    findMode(testArrayB, 10);
    findMode(testArrayC, 10);
    findMode(testArrayD, 10);

    return 0;

}

int findMode(int inputArray[], int arraySize)
{
    // Add a counter for values added to numSets
    int groupCount = 0;

    // Create a vector to hold other vectors


    // Loop through each value in the array
    for (int i = 0; i < arraySize; i++)
    {
        // Create a variable to validate if the value matches a group
        bool groupExists = false;

        // Loop counter used for checking group existence
        int j = 0;

        if (numSets.empty())
        {
            numSets.push_back(inputArray[i]);
            groupCount++;
        }
        else
            while (!groupExists)
            {
                if (inputArray[i] == numSets[j][0])
                {

                }
            }


    }

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