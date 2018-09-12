#include <iostream>

using namespace std;

int n = 0;
int position[20];

bool place(int queen_number, int row_position)
{
	for (int i = 0; i < queen_number; i++)
	{
		int other_row_pos = position[i];

		if (other_row_pos == row_position || // Same row
			other_row_pos == row_position - (queen_number - i) || // Same diagonal
			other_row_pos == row_position + (queen_number - i))   // Same diagonal
			return false;
	}
	return true;
}


void NQueens(int k)
{
	if (k == n)
	{
		cout << "Solution: ";
		for (int i = 0; i < n; i++)
			cout << position[i] << " ";
		cout << endl;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (place(k, i))
			{
				position[k] = i;
				NQueens(k + 1);
			}
		}
	}
}

int main()
{
    cout<<"Enter the value of N: \n";
    cin>>n;
	NQueens(0);
	return 0;
}