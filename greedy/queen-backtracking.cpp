#include <bits/stdc++.h>
using namespace std;

const int N = 4;

bool backtracking(int board[N][N], int col)
{
	if (col >= N)
	{
		return true;
	}
	for (int r = 0; r < N; r++)
	{
		// kiểm tra tại vị trí board[i][col]
		bool isSafe = true;
		for (int c = 0; c < col; c++)
		{
			if (board[r][c])
			{
				isSafe = false;
				break;
			}
		}

		// kiểm tra đường chéo trái
		for (int i = r, j = col; i >= 0 && j >= 0; i--, j--)
		{
			if (board[i][j])
			{
				isSafe = false;
				break;
			}
		}

		// kiểm tra chéo phải
		for (int i = r, j = col; j >= 0 && i < N; i++, j--)
		{
			if (board[i][j])
			{
				isSafe = false;
				break;
			}
		}

		if (isSafe)
		{
			board[r][col] = 1;
			if (backtracking(board, col + 1))
			{
				return true;
			}
			board[r][col] = 0;
		}
	}
	return false;
}

int main()
{
	int board[N][N] = {0};

	// solution
	if (backtracking(board, 0) == false)
	{
		cout << "No solution.";
	}

	// print solution
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}