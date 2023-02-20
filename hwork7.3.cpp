#include<iostream>

using namespace std;

int squareInt(int in);
void squareInt(int in, int& out);
void squareInt(int in, int* out);

int main() {
	int in = 0, out = 0, out1 = 0;
	cout << "Enter the number - ";
	cin >> in;
	//return value
	cout << "First function:\n";
	if (squareInt(in) == 0)
		cout << "No root\n";
	else
		cout << "Root - " << squareInt(in) << endl;
	//function link
	cout << "Second function:\n";
	squareInt(in, out);
	if (out == 0)
		cout << "No root\n";
	else
		cout << "Root - " << out << endl;
	//function pointer
	cout << "Third function:\n";
	squareInt(in, &out1);
	if (out1 == 0)
		cout << "No root\n";
	else
		cout << "Root - " << out1 << endl;

	return 0;
}

int squareInt(int in)
{
	for (int i = 1; i < in - 1; i++)
	{
		if (((in / i) == i) && ((in % i) == 0))
			return i;
	}
	return 0;
}

//function link
void squareInt(int in, int& out)
{
	for (int i = 1; i < in - 1; i++)
	{
		if (((in / i) == i) && ((in % i) == 0))
		{
			out = in / i;
			break;
		}
	}
}

//function pointer
void squareInt(int in, int* out)
{
	for (int i = 1; i < in - 1; i++)
	{
		if (((in / i) == i) && ((in % i) == 0))
		{
			*out = in / i;
			break;
		}
	}
}
