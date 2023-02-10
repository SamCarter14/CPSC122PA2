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

int main() {
   srand(time(0));
   auto start = high_resolution_clock::now();
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);
   
   ofstream outFile1, outFile2, outFile3;
   outFile1.open("insertionSort.csv");
   outFile2.open("bubbleSort.csv");
   outFile3.open("selectionSort.csv");
   long dataComp, loopComp, dataAsn, loopAsn, other, total = 0;
   vector<int> vectSorted500;
   vector<int> vectSorted1000;
   vector<int> vectSorted5000;
   vector<int> vectSorted10000;
   vector<int> firstVectBack500;
   vector<int> firstVectBack1000;
   vector<int> firstVectBack5000;
   vector<int> firstVectBack10000;
   vector<int> secondVectBack500;
   vector<int> secondVectBack1000;
   vector<int> secondVectBack5000;
   vector<int> secondVectBack10000;
   vector<int> thirdVectBack500;
   vector<int> thirdVectBack1000;
   vector<int> thirdVectBack5000;
   vector<int> thirdVectBack10000;
   vector<int> vectRan500;
   vector<int> vectRan1000;
   vector<int> vectRan5000;
   vector<int> vectRan10000;
   vector<int> vectRan500Copy1;
   vector<int> vectRan500Copy2;
   vector<int> vectRan1000Copy1;
   vector<int> vectRan1000Copy2;
   vector<int> vectRan5000Copy1;
   vector<int> vectRan5000Copy2;
   vector<int> vectRan10000Copy1;
   vector<int> vectRan10000Copy2;
    //testSortingAlgorithms();
    //cout << endl;

	//testSearchingAlgorithms();
   generateVectorSorted(vectSorted500, 500);
   generateVectorSorted(vectSorted1000, 1000);
   generateVectorSorted(vectSorted5000, 5000);
   generateVectorSorted(vectSorted10000, 10000);

   generateVectorSortedBack(firstVectBack500, 500);
   generateVectorSortedBack(firstVectBack1000, 1000);
   generateVectorSortedBack(firstVectBack5000, 5000);
   generateVectorSortedBack(firstVectBack10000, 10000);
   generateVectorSortedBack(secondVectBack500, 500);
   generateVectorSortedBack(secondVectBack1000, 1000);
   generateVectorSortedBack(secondVectBack5000, 5000);
   generateVectorSortedBack(secondVectBack10000, 10000);
   generateVectorSortedBack(thirdVectBack500, 500);
   generateVectorSortedBack(thirdVectBack1000, 1000);
   generateVectorSortedBack(thirdVectBack5000, 5000);
   generateVectorSortedBack(thirdVectBack10000, 10000);

   generateVectorRandom(vectRan500, 500);
   generateVectorRandom(vectRan1000, 1000);
   generateVectorRandom(vectRan5000, 5000);
   generateVectorRandom(vectRan10000, 10000);

   copyVector(vectRan500, vectRan500Copy1);
   copyVector(vectRan500, vectRan500Copy2);
   copyVector(vectRan1000, vectRan1000Copy1);
   copyVector(vectRan1000, vectRan1000Copy2);
   copyVector(vectRan5000, vectRan5000Copy1);
   copyVector(vectRan5000, vectRan5000Copy2);
   copyVector(vectRan10000, vectRan10000Copy1);
   copyVector(vectRan10000, vectRan10000Copy2);

outFile1 << "Vector Configuration, Microseconds, # Data Comparisons, # Loop Comparisons, # Data Assignments, # Loop Assignments, # Other, # Total" << endl;
outFile1 << "Sorted N = 500,";
runInsertionSort(vectSorted500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Sorted N = 1000,";
runInsertionSort(vectSorted1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Sorted N = 5000,";
runInsertionSort(vectSorted5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Sorted N = 10000,";
runInsertionSort(vectSorted10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Descending N = 500,";
runInsertionSort(firstVectBack500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Descending N = 1000,";
runInsertionSort(firstVectBack1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Descending N = 5000,";
runInsertionSort(firstVectBack5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Descending N = 10000,";
runInsertionSort(firstVectBack10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Random N = 500,";
runInsertionSort(vectRan500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Random N = 1000,";
runInsertionSort(vectRan1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Random N = 5000,";
runInsertionSort(vectRan5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);
outFile1 << "Random N = 10000,";
runInsertionSort(vectRan10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile1);

outFile2 << "Vector Configuration, Microseconds, # Data Comparisons, # Loop Comparisons, # Data Assignments, # Loop Assignments, # Other, # Total" << endl;
outFile2 << "Sorted N = 500,";
runBubbleSort(vectSorted500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Sorted N = 1000,";
runBubbleSort(vectSorted1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Sorted N = 5000,";
runBubbleSort(vectSorted5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Sorted N = 10000,";
runBubbleSort(vectSorted10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Descending N = 500,";
runBubbleSort(secondVectBack500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Descending N = 1000,";
runBubbleSort(secondVectBack1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Descending N = 5000,";
runBubbleSort(secondVectBack5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Descending N = 10000,";
runBubbleSort(secondVectBack10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Random N = 500,";
runBubbleSort(vectRan500Copy1, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Random N = 1000,";
runBubbleSort(vectRan1000Copy1, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Random N = 5000,";
runBubbleSort(vectRan5000Copy1, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);
outFile2 << "Random N = 10000,";
runBubbleSort(vectRan10000Copy1, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile2);

outFile3 << "Vector Configuration, Microseconds, # Data Comparisons, # Loop Comparisons, # Data Assignments, # Loop Assignments, # Other, # Total" << endl;
outFile3 << "Sorted N = 500,";
runSelectionSort(vectSorted500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Sorted N = 1000,";
runSelectionSort(vectSorted1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Sorted N = 5000,";
runSelectionSort(vectSorted5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Sorted N = 10000,";
runSelectionSort(vectSorted10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Descending N = 500,";
runSelectionSort(thirdVectBack500, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Descending N = 1000,";
runSelectionSort(thirdVectBack1000, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Descending N = 5000,";
runSelectionSort(thirdVectBack5000, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Descending N = 10000,";
runSelectionSort(thirdVectBack10000, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Random N = 500,";
runSelectionSort(vectRan500Copy2, 500, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Random N = 1000,";
runSelectionSort(vectRan1000Copy2, 1000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Random N = 5000,";
runSelectionSort(vectRan5000Copy2, 5000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile3 << "Random N = 10000,";
runSelectionSort(vectRan10000Copy2, 10000, dataComp, loopComp, dataAsn, loopAsn, other, total, outFile3);
outFile1.close();
outFile2.close();
outFile3.close();


   

   
return 0;
}