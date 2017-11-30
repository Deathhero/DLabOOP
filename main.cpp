#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "gtest/gtest.h"
#include "Test.h"
#include "Protect.h"

using namespace std;


int main(int argc, char* argv[]) 
{
	if (argc != 3) 
	{
		cout << "incorrect command line! Waited: command in_file out_file" << endl;
		exit(1);
	}

	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);

	cout << "Start" << endl;

	container c;

	c.In(ifst);
	ofst << "Filled container. " << endl;
	int k1 = 10;
	int k = 10;
	while (k != 0) {

		cout << "Input number:" << endl;
		cout << "1 - Out container" << endl;
		cout << "2 - Sort and out container" << endl;
		cout << "3 - Out only bus" << endl;
		cout << "4 - Out only truck" << endl;
		cout << "5 - Out only passenger car" << endl;
		cout << "6 - Multimethod" << endl;
		cout << "7 - Clear and out container" << endl;
		cout << "0 - exit" << endl;
		cin >> k;
		if (cout.fail())
		{
			cout << "Wrong input!" << endl;
			exit(1);
		}
		if (k < 0 || k > 7) {
			cout << "Incorrect choice! Try again!" << endl;
			continue;
		}
		else {
			switch (k)
			{
			case 1:
				c.Out(ofst);
				break;
			case 2:
				cout << "Input number:" << endl;
				cout << "0 - from small to big" << endl;
				cout << "1 - from big to small" << endl;
				while (k1 != 0 || k1 != 1)
				{
					cin >> k1;
					if (cout.fail())
					{
						cout << "Wrong input!" << endl;
						exit(1);
					}
					if (k1 != 0 || k1 != 1)
					{
						cout << "Incorrect choice! Try again!" << endl;
						continue;
					}
				}
				switch (k1)
				{
				case 0:
					c.Sort(0);
					break;
				case 1:
					c.Sort(1);
					break;
				default:
					break;
				}
				c.Out(ofst);
				break;
			case 3:
				c.OutOnlyBus(ofst);
				break;
			case 4:
				c.OutOnlyTruck(ofst);
				break;
			case 5:
				c.OutOnlyPassengerCar(ofst);
				break;
			case 6:
				c.Multimethod(ofst);
				break;
			case 7:
				c.Clear();
				c.Out(ofst);
				break;
			default:
				break;
			}
		}
	}
	ifst.close();
	ofst.close();

	cout << "Stop" << endl;
	return 0;
	/*::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();*/
}
