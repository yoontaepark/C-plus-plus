
#include <iostream>
#include <string>
using namespace std;

string* createWordsArray(string sentence, int &outWordsArrSize);
void printArrElem(string* arr, int arrSize);


int main() {

    string sentenceEntered;
    int outWordsArrSize = 0;
    string* stringArr = new string[1];

    cout << "Enter a sentence: " << endl;
    getline(cin, sentenceEntered);

    stringArr = createWordsArray(sentenceEntered, outWordsArrSize);

    printArrElem(stringArr, outWordsArrSize);

    delete[] stringArr;
}

string* createWordsArray(string sentence, int &outWordsArrSize) {

    string* wordsArray = new string[1];

    int arrPhysicalSize = 1;
    int i = 0;
    string word;

    int wordCounter = 0;
    int sentenceLength = sentence.length();

    while (sentenceLength >= 0) {


        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {

            if (wordCounter > 0) {
                string* newLinesArr;
                newLinesArr = new string[arrPhysicalSize * 2.0];
                for (int i = 0; i < wordCounter; i++)
                    newLinesArr[i] = wordsArray[i];
                delete[] wordsArray;
                wordsArray = newLinesArr;
                arrPhysicalSize *= 2;
            }

            wordsArray[wordCounter] = word;
            wordCounter++;

            word = "";

        }
        else 
            word += sentence[i];
        
        i++;
        sentenceLength--;

    }

    outWordsArrSize = wordCounter;
    return wordsArray;

}

void printArrElem(string* arr, int arrSize) {
    cout << "New Size: " << arrSize << endl;
    cout << "[";
    for (int i = 0; i < arrSize; i++) 
    {
        cout << "'" << arr[i] << "'";
        if (i != arrSize - 1) 
            cout << ",";        
    }
    cout << "]";
}