#include "stdafx.h"
#include "zavd.h"
#include <iostream>

using namespace std;
zavd::zavd()
{
	cout << "Enter size" << endl;
	cin >> zavd::n;
	cout << "Enter A" << endl;
	for (int i=0;i<n;i++)
	{
		cin >> S1;
		L1.push_back(S1);
	}
	cout << "Enter B" << endl;
	for (int i = 0; i<n; i++)
	{
		cin >> S2;
		L2.push_back(S2);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(L1[i]==L2[j])
				L.push_back(L1[i]);
	L.unique();
	cout << "List" << endl;
	for (list<string>::const_iterator iterator = L.begin(), end = L.end(); iterator != end; iterator++) {
		cout << *iterator << endl;
	}
}
zavd::~zavd()
{
}
