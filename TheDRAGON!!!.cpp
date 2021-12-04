#include<iostream>

using namespace std;

int main() {

	int row2 = 0;
	int col2 = 0;

	cout << "Enter the rows\n";
	cin >>row2;
	cout << "Enter the columns\n";
	cin >> col2;

	for (int row = 1;  row <= row2;  row++)
	{


		for (int col = 1; col <= col2; col++)
		{

			/*if (row % 2 == 0//row%2==1   (for odd)) {


				row = col;
				cout << row * col << "\t";

				if ((row * col) % 2 == 0) {

					row = col;
					cout << row * col << "\t";

				}
			}*/

			/*half of the triangle*/

			row = col;
			cout << row * col << "\t";

		}
		
		cout << endl;

	}


}