#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void Draw()
{
	system("cls");
	cout << "Tic Tac Toe version 1.0" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;

	}
}
void Input()
{
	int a;
	cout << "Print the number of the field:";
	cin >> a;

	if (a == 1)
		matrix[0][0] = player;
	else if (a == 2)
		matrix[0][1] = player;
	else if (a == 3)
		matrix[0][2] = player;
	else if (a == 4)
		matrix[1][0] = player;
	else if (a == 5)
		matrix[1][1] = player;
	else if (a == 6)
		matrix[1][2] = player;
	else if (a == 7)
		matrix[2][0] = player;
	else if (a == 8)
		matrix[2][1] = player;
	else if (a == 9)
		matrix[2][2] = player;
}
void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else player = 'X';
}
char Win()
{
	// player1
	// check all 3 rows
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	// check all 3 columns
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	// check diagnals
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//player 2
	// check all 3 rows
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	// check all 3 columns
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	// check diagnals
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	else return '/';
}

int main()
{
	Draw();
	while (1)
	{
	Input();
	Draw();
		if (Win() == 'X')
		{
			cout << "Player " << player << " Wins!" << endl;
			break;
		}
		if (Win() == 'O')
		{
			cout << "Player " << player << " Wins!" << endl;
			break;
		}
	TogglePlayer();
	}
	system("pause");
	return 0;
}