#include <iostream>
#include <vector>


std::vector<int> findMode(int array[], int arraySize);

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
    std::cout << findMode(testArrayA, 10);
    findMode(testArrayB, 10);


    return 0;

}

std::vector<int> findMode(int inputArray[], int arraySize)
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
                    // Make sure that we don't go above bounds
                    if (k == modeVec.size()) {
                        modeVec.push_back(inputArray[i]);
                        valExists = true;
                    }
                    else if (inputArray[i] == modeVec.at(k))
                    {
                        valExists = true;
                    }
                    else
                    {
                        k++;

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
    std::sort(modeVec.begin(), modeVec.end());
    return modeVec;
}