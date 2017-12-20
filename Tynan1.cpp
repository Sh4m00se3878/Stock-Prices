/*Seamus Tynan
This program calculates the Total Ammount of money lost in a stoack deal*/

#include <iostream>
using namespace std;

int main()
{
	double totAmPaid, totAmSold, totAmLost;

	totAmPaid = 600 * 21.77;
	totAmSold = 600 * 16.44;
	totAmLost = totAmPaid - totAmSold;

	cout << "When Kathryn bought her stocks she paid $" << totAmPaid << endl;
	cout << "When Kathryn sold her stocks she recieved $" << totAmSold << endl;
	cout << "Kathryn Recieved $" << totAmLost << endl;


	system("pause");
	return 0;
}