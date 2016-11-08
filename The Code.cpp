#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
int a[1000][1000], b[1000];
void one_dimensional(void) {
	int N;
	cout << "Enter The Size Of The Array :";
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> b[i];
	sort(b, b + N);
	for (int i = 0; i < N; i++)
		cout << b[i] << "  ";
	cout << endl;
}
void two_dimensional(void) {
	int N,M;
	cout << "Enter The first dimensional :";
	cin >> N;
	cout << "Enter The second dimensional :";
	cin >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> a[i][j];
	for (int i = 0; i < N; i++)
		sort(a[i], a[i] + M);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << a[i][j] << "  ";
		cout << endl;
	}
}
int main()
{
	int N;
	cout << "[1]:one-dimensional\t[2]:two-dimensional\nPLZ Enter Your Choice : ";
	cin >> N;
	if (N == 1)
		one_dimensional();
	else if (N == 2)two_dimensional();
    return 0;
}

