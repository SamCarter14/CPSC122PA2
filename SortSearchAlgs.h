/*
Sam Carter
Class: CPSC 122 spring 2023
Assignment: Programming Assignment 2
Description: This program sorts vectors using three different apporaches,
and uses counters to measure the efficiency of the approaches and send to
an outfile
Notes: Gaddis was used from starter code from Gina Sprint
*/
#ifndef SORT_SEARCH_ALGS_H
#define SORT_SEARCH_ALGS_H


#include <iostream>
#include <vector>
#include <ctime> 
#include <cstdlib>
#include <chrono>
#include <fstream>

using namespace std::chrono;
using namespace std;
// helper
void printVector(vector<int>, int);

//generate vectors
void generateVectorSorted(vector<int> &vect, int);
void generateVectorSortedBack(vector<int> &vect, int);
void generateVectorRandom(vector<int> &vect, int);
void copyVector(vector<int> original, vector<int> &copy);
// sorting
//void testSortingAlgorithms();
void selectionSortVectorGaddis(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total);
void bubbleSortVectorGaddis(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total);
void insertionSortVector(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total);

// searching
//void testSearchingAlgorithms();
int linearSearchVector(const vector<int>, int, int);
int linearSearchVectorGaddis(const vector<int>, int, int);
int binarySearchVectorGaddis(const vector<int>, int, int);

//run/data output
void runInsertionSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile);
void runBubbleSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile);
void runSelectionSort(vector<int> &vect, int size, long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total, ofstream& outFile);

//data resets
void dataReset(long& dataComp, long& loopComp, long& dataAsn, long& loopAsn, long& other, long& total);

#endif