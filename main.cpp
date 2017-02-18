

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
    int maxFreq     = 0;



    // Loop through entire array
    for (int i = 0; i < arraySize; i++)
    {
        int currentFreq = 0;
        int currentVal;

        // Set the current value we are looking for
        currentVal = inputArray[i];

        // Loop through rest of remain loop
        for (int j = i; j < arraySize; j++)
        {
            // Check to see if any other numbers match
            if (inputArray[j] == currentVal)
            {
                // Add to current frequency counter
                currentFreq++;
            }
        }
        if (currentFreq > maxFreq)
        {
            maxFreq = currentFreq;
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