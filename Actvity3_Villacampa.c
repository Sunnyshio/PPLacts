// program that creates an array of 100 random integers in the range 1 to 200
//This code used a sequential search in searching the array 100 times using randomly generated targets (search key) in the same range

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define array 100
#define search_count 100

int sequential_search(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; //this line returns the index of the found target
        }
    }
    return -1; //signifies that target is not found
}

int main() {
    int i, successful_searches = 0, total_tests = 0;
    int numbers[array];
    srand(time(NULL)); //this line sets the random number generator

    //populate the array with random numbers ranging from 0 to 201
    for (i = 0; i < array; i++) {
        numbers[i] = rand() % (201 + 1); //this generates a random number between numbers 0 and 201
    }

    //this line performs sequential search 100 times
    for (i = 0; i < search_count; i++) {
        int target = rand() % (201 + 1); //this line generates a random target to search
        int result = sequential_search(numbers, array, target);
        if (result != -1) {
            successful_searches++; //increment number of successful searches 
            total_tests += result + 1; //concatenate the total number of tests
        }
    }

    printf("Successful searches: %d\n", successful_searches); //displays the number of succesful searches
    printf("Percentage of successful searches: %.2i%%\n", 100 * successful_searches / search_count); //displays the percentage of successful searches
    printf("Average number of tests per search: %.2f tests\n", (float) total_tests / 100); //displays the average number of tests per search

}
