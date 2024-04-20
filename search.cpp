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
    int iterativeSearch(vector<int> v, int elem) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == elem) {
            return i; 
        }
    }
    return -1; 
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
    int binarySearch(vector<int> &v, int start, int end, int elem) {
    if (start <= end) {
        int mid = start + (end - start) / 2;

        if (v[mid] == elem) {
            return mid; // Element found at mid
        }

        if (v[mid] > elem) {
            // Search in the left half
            return binarySearch(v, start, mid - 1, elem);
        } else {
            // Search in the right half
            return binarySearch(v, mid + 1, end, elem);
        }
    }
    return -1; // Element not found
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


int main() {
    vector<int> v;
    vecGen("10000_numbers.csv", v);

    vector<int> elem_to_find;
    vecGen("test_elem.csv", elem_to_find);

    cout << "Iterative Search:" << endl;
    double total_iterative_time = 0.0;
    for (int i = 0; i < elem_to_find.size(); ++i) {
        int elem = elem_to_find[i];
        clock_t start = clock();
        int index_if_found = iterativeSearch(v, elem);
        clock_t end = clock();
        double elapsed_time_in_sec = (double(end - start) / CLOCKS_PER_SEC);
        total_iterative_time += elapsed_time_in_sec;
        cout << "Element " << elem << " found at index " << index_if_found << ". Time taken: " << elapsed_time_in_sec << " seconds" << endl;
    }
    cout << "Average time for iterativeSearch: " << total_iterative_time / elem_to_find.size() << " seconds" << endl;

    cout << "\nBinary Search:" << endl;
    double total_binary_time = 0.0;
    for (int i = 0; i < elem_to_find.size(); ++i) {
        int elem = elem_to_find[i];
        clock_t start = clock();
        int index_if_found = binarySearch(v, 0, v.size() - 1, elem);
        clock_t end = clock();
        double elapsed_time_in_sec = (double(end - start) / CLOCKS_PER_SEC);
        total_binary_time += elapsed_time_in_sec;
        cout << "Element " << elem << " found at index " << index_if_found << ". Time taken: " << elapsed_time_in_sec << " seconds" << endl;
    }
    cout << "Average time for binarySearch: " << total_binary_time / elem_to_find.size() << " seconds" << endl;

    return 0;
}
