#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;


/**
 * @brief returns the first index of ele if it exists, otherwise retrun -1
 * interativeSearch starts at the first index and iterates sequentially to the next until it either 
 * finds the element or until it reaches the end (i.e. element does not exist)
 * 
 * @param v : vector of elements 
 * @param elem : integer look for
 * @return int
*/
int iterativeSearch(vector<int>v, int elem){
    // use a for loop where the index, i goes from 0 to the size of v

    // inside the for loop, use an if statement to check whether the element at i (e.g. v[i]) equals elem
    // inside the if statement return i


    // outside of the for loop return -1

}

/**
 * @brief returns the index of elem, if its exists in v. Otherwise it returns -1.
 * binarySearch is recursive (i.e. function calls itself).
 * It utilizes the fact thar v is increasing order (e.g. values go up and 
 * duplicates are not allowed).
 * 
 * It calculates the mid from the start and the end index. It compares v[mid] (i.e. value
 * at mid) with elem and decides wearher to search the left half (lower values)
 * or right  half (upper values).
 * 
 * 
 * @param v : vector of elements 
 * @param start : leftmost index (starting value is 0)
 * @param end : rightmost index (starting value is v.size())
 * @param elem : integer to look for
 * @return int  
*/
int binarySearch(vector<int> & v, int start, int end, int elem){
    // write an if statement that checks the terminating case
    //inside the if statement return -1

    // instantiate the midpoint


    // Use if/else statements to do the following:
    // 1) update end (search left half)

    // 2) update start (search right half)

    //3) return mid (found the elem)

    // return a recursive calls to binarySearch(...)


}

/**
 * @brief updates v to contain the values from filename (leave as is)
 * 
 * It is expected that the files contain values ranging from one to 
 * one hunderd million in ascending order (no duplicates).
 * 
 * @param filename : string
 * @param v :vector
*/
void vecGen(string filename, vector<int> & v){
    ifstream file(filename);
    int num;
    v.clear();
    while (file.is_open() && file >> num){
        v.push_back(num);
    }
    file.close();
}


int main (){
    // populate v with 10000 sorted numbers (leave as is)
    vector<int> v;
    vecGen("10000_numbers.csv")
}