/*
Sam Carter
Class: CPSC 122 spring 2023
Assignment: Programming Assignment 2
Description: This program sorts vectors using three different apporaches,
and uses counters to measure the efficiency of the approaches and send to
an outfile
Notes: Gaddis was used from starter code from Gina Sprint
*/
#include "SortSearchAlgs.h"

// adapted from Gaddis
//***************************************************
// The swap function swaps a and b in memory.   
// never modified myself    *
//***************************************************
void swap(int &a, int &b) {
   int temp = a;
   a = b;
   b = temp;
}

// adapted from Gaddis
//********************************************************************
// The selectionSort function sorts an int Vector in ascending order. *
//********************************************************************
/*
Function: selectionSortGaddis
Never modified
Description: This function will sort a vector using the selection sort approach
Input parameters: vect, size and data counters
Returns: a sorted vector and data counts
Pre: Vector data needs to be sorted
Post: Vector data will be sorted and operations counted
*/
void selectionSortVectorGaddis(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total) {
   int minIndex, minValue;
   other += 2;//initialize minIndex and minValue
   loopAsn++; //start = 0

   for (int start = 0; start < (size - 1); start++) {
      loopComp++; //start < (size) - 1
      loopAsn++; //start++
      minIndex = start;
      other++; //minIndex
      minValue = vect.at(start);
      dataAsn ++; //minValue == vect.at(start)
      loopAsn++;//int index = start + 1
      for (int index = start + 1; index < size; index++) {
         loopComp++; //index < size
         loopAsn++; //index++
         dataComp++; //vect.at(index) < minValue
         if (vect.at(index) < minValue) {
            minValue = vect.at(index);
            dataAsn++; //minValue = vect.at(index)
            minIndex = index;
            other++;//minIndex = index
         }

      }
      loopComp++; //index++
      swap(vect.at(minIndex), vect.at(start));
      dataAsn += 3; //index < size

   }
  
   loopComp++;//start < (size - 1)
}


// adapted from Gaddis
//*****************************************************************
// The bubbleSort function sorts an int Vector in ascending order. *
//*****************************************************************
/*
Function: bubbleSortGaddis
Never modified
Description: This function will sort a vector using the bubble sort approach
Input parameters: vect, size and data counters
Returns: a sorted vector and data counts
Pre: Vector data needs to be sorted
Post: Vector data will be sorted and operations counted
*/
void bubbleSortVectorGaddis(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total) {
   int maxElement;
   other += 1; //maxElement
   int index;
   other += 1; //initialize index
loopAsn++; //mexElement = size - 1
   for (maxElement = size - 1; maxElement > 0; maxElement--) {
      loopComp++; //maxElement > 0
      loopAsn++; //maxElement--
      loopAsn++; //index = 0
      for (index = 0; index < maxElement; index++) {
         loopComp++; //index < maxElement
         loopAsn++; //index++
         dataComp++; //vect.at(index) > vect.at(index + 1)
         if (vect.at(index) > vect.at(index + 1)) {
            dataAsn += 3; //swap
            swap(vect.at(index), vect.at(index + 1));
         }
      }
      loopComp++; //index < maxElement
   }
  loopComp++; //maxElement > 0
}

/*
Function: insertionSortGaddis
Never modified
Description: This function will sort a vector using the insertion sort approach
Input parameters: vect, size and data counters
Returns: a sorted vector and data counts
Pre: Vector data needs to be sorted
Post: Vector data will be sorted and operations counted
*/
void insertionSortVector(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total) {
   int i, j, currValue;
   other += 3; // initialize j, i, currValue

loopAsn++; //i = 1
	for (i = 1; i < size; i++) {
      loopComp++; //i < size
      loopAsn++; //i++
		currValue = vect.at(i);
      dataAsn++; //currValue = vect.at(i)
		j = i - 1;
      loopAsn++; //j = i - 1
		while (j >= 0 && currValue < vect.at(j)) {
         loopComp++; //j >= 0 && currValue < vect.at(j)
			vect.at(j + 1) = vect.at(j);
         dataAsn++; //vect.at(j + 1) = vect.at(j);
			j--;
         loopAsn++; //j--
		}
      loopComp++; //j >= 0 && currValue < vect.at(j)
		vect.at(j + 1) = currValue;
      dataAsn++;// vect.at(j + 1) = currValue
	}
    loopComp++; //i < size
}



/*
Function: void generateVectorSorted()
Date Created: 2/6/23
Date last modified: 2/6/23
Description: Generates numbers for a vector in order, 1, 2, 3 etc
Input parameters: the vect and num
Returns: a filled vector
Pre: The number of slots needs to be put in as well as a vector
Post: It will return a vector filled in order of the amount you choose
*/
void generateVectorSorted(vector<int> &vect, int num){
for (int i = 0; i < num; i++){
    vect.push_back(i);
}
/*
Function: void generateVectorSortedBack()
Date Created: 2/6/23
Date last modified: 2/6/23
Description: Generates numbers for a vector in backwards order, 5, 4, 3 etc
Input parameters: the vect and num
Returns: a filled vector
Pre: The number of slots needs to be put in as well as a vector
Post: It will return a vector filled in backwards order of the amount you choose
*/
}
void generateVectorSortedBack(vector<int> &vect, int num){
for (int i = 0; i < num; i++){
    vect.push_back((num - 1) - i);
}
/*
Function: void generateVectorRandom()
Date Created: 2/6/23
Date last modified: 2/6/23
Description: Generates numbers for a vector randomly
Input parameters: the vect and num
Returns: a filled vector
Pre: The number of slots needs to be put in as well as a vector
Post: It will return a vector filled out of order of the amount you choose
*/
}
void generateVectorRandom(vector<int> &vect, int num){
for (int i = 0; i < num; i++){
    vect.push_back(rand() % 100000);
}
}
/*
Function: void copyVector()
Date Created: 2/6/23
Date last modified: 2/6/23
Description: This function will take two vectors and copy one into the other
Input parameters: two vectors, original and copy
Returns: a copy vector of the original
Pre: Must have a filled original vector
Post: Will give a copied vector with same values
*/
void copyVector(vector<int> original, vector<int> &copy){
   for(int i = 0; i < original.size(); i++){
      copy.push_back(original.at(i));
   }

}
/*
Function: dataReset
Date Created: 2/7/23
Date last modified: 2/7/23
Description: Resets all the counting data to 0
Input parameters: long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total
Returns: All the above data = 0
Pre: You will put in these integers that have data
Post: They will be returned with data value 0
*/
void dataReset(long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total){
   dataComp = 0;
   loopComp = 0;
   dataAsn = 0;
   loopAsn = 0; 
   other = 0;
   total = 0;
}
/*
Function: runInsertionSort
Date Created: 2/7/23
Date last modified: 2/7/23
Description: This function will reset the data counters to 0, 
keep track of the time it takes to sort the insertionSortVector,
keep track of the operation counts and return this info to an outfile
Input parameters: outfile and the operation counters
Returns: information to outfile
Pre: Data from the last data will need to be reset, vectors have yet to be sorted
Post: vectors will be sorted, count data reset to count again and outfile will recieve info
*/
void runInsertionSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile){
   dataReset(dataComp, loopComp, dataAsn, loopAsn, other, total);
   auto start = high_resolution_clock::now();
   insertionSortVector(vect, size, dataComp, loopComp, dataAsn, loopAsn, other, total);
   total += dataComp + loopComp + dataAsn + loopAsn + other;
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);
   outFile << duration.count() << ", " << dataComp << ", " << loopComp << ",  " << dataAsn << ", " << loopAsn << ", " << other << ", " << total << endl;

}
/*
Function: runBubbleSort
Date Created: 2/7/23
Date last modified: 2/7/23
Description: This function will reset the data counters to 0, 
keep track of the time it takes to sort the bubbleSortVector,
keep track of the operation counts and return this info to an outfile
Input parameters: outfile and the operation counters
Returns: information to outfile
Pre: Data from the last data will need to be reset, vectors have yet to be sorted
Post: vectors will be sorted, count data reset to count again and outfile will recieve info
*/
void runBubbleSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile){
   dataReset(dataComp, loopComp, dataAsn, loopAsn, other, total);
   auto start = high_resolution_clock::now();
   bubbleSortVectorGaddis(vect, size, dataComp, loopComp, dataAsn, loopAsn, other, total);
   total += dataComp + loopComp + dataAsn + loopAsn + other;
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);
   outFile << duration.count() << ", " << dataComp << ", " << loopComp << ",  " << dataAsn << ", " << loopAsn << ", " << other << ", " << total << endl;

}
/*
Function: runSelectionSort
Date Created: 2/7/23
Date last modified: 2/7/23
Description: This function will reset the data counters to 0, 
keep track of the time it takes to sort the selectionSortVector,
keep track of the operation counts and return this info to an outfile
Input parameters: outfile and the operation counters
Returns: information to outfile
Pre: Data from the last data will need to be reset, vectors have yet to be sorted
Post: vectors will be sorted, count data reset to count again and outfile will recieve info
*/
void runSelectionSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile){
   dataReset(dataComp, loopComp, dataAsn, loopAsn, other, total);
   auto start = high_resolution_clock::now();
   selectionSortVectorGaddis(vect, size, dataComp, loopComp, dataAsn, loopAsn, other, total);
   total += dataComp + loopComp + dataAsn + loopAsn + other;
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);
   outFile << duration.count() << ", " << dataComp << ", " << loopComp << ",  " << dataAsn << ", " << loopAsn << ", " << other << ", " << total << endl;

}