

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
    std::cout << "The Mode for Array A is: " << findMode(testArrayA, 10);
    std::cout << "The Mode for Array B is: " << findMode(testArrayB, 10);
    std::cout << "The Mode for Array C is: " << findMode(testArrayC, 10);
    std::cout << "The Mode for Array D is: " << findMode(testArrayD, 10);

    return 0;

}

int findMode(int inputArray[], int arraySize)
{
    int maxFreq = 0;
    std::vector<int> modeVec;

    // Loop through entire array and find the highest frequency
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

    // Loop through entire array again and compare max frequency to other number frequencies
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
        if (currentFreq == maxFreq)
        {
            if (!modeVec.empty())
            {
                // Check to make sure the value isn't already stored.
                bool valExists = false;
                int k = 0;
                while (!valExists)
                {
                    if (inputArray[i] == modeVec.at(k))
                    {
                        valExists = true;
                    }
                    else
                    {
                        if (k == i) {
                            modeVec.push_back(inputArray[i]);
                        } else {
                            k++;
                        }
                    }
                }
            }
            // Add first value to the vector
            else
            {
                modeVec.push_back(inputArray[i]);
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