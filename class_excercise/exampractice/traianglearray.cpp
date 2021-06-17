#include <iostream>

using namespace std;

int main()
{
	int rows = 5, cols = 5;
	int arr[rows][cols];
	// allocate and initialize the array
    int count = 0;
	for (int r = 0; r < rows; r++) {
        for (int c = 0; c <= r; c++){
            arr[r][c] = count++;
        }
    }

	for (int r = 0; r < rows; r++) {
        for (int c = 0; c <= r; c++){
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }


	return 0;
}