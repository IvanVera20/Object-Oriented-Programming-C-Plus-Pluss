#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief writes sample_size number of integers
 * Example output: if n = 3 and arr = [1,2,3]
 * 1
 * 2
 * 3
 * 
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, int *arr, int sample_size) {
    ofstream file(filename);

    for (int i = 0; i < sample_size; i++) {
        file << arr[i] << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief writes sample_size number of strings
 * Example Output: if n = 2 and arr = ["cat","dog"]
 * cat
 * dog
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, string *arr, int sample_size) {
    ofstream file(filename);

    for (int i = 0; i < sample_size; i++) {
        file << arr[i] << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief reads the content of any file
 * 
 * @param filename
*/
void readFile(string filename) {
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}

int main() {
    const int SAMPLE_SIZE = 10;
    int array_int[SAMPLE_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ",
                                     "This", "is", "another", "sentence.",
                                     "The", "end."};
    char array_char[SAMPLE_SIZE] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};

    string int_file = "array_int.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE);

    string str_file = "array_str.csv";
    writeToFile(str_file, array_str, SAMPLE_SIZE);

    string char_file = "array_char.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE);

    cout << "Reading from " << int_file << ":" << endl;
    readFile(int_file);
    cout << endl;

    cout << "Reading from " << str_file << ":" << endl;
    readFile(str_file);
    cout << endl;

    cout << "Reading from " << char_file << ":" << endl;
    readFile(char_file);
    cout << endl;

    return 0;
}
