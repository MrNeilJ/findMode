#include <iostream>
#include <vector>


int findMode(int array[], int arraySize);

int main() {
    std::cout << "Hello, World!" << std::endl;
    int testArray[8] = {2, 2, 4, 7, 10, 9, 5, 3};
    findMode(testArray, 8);

    return 0;

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