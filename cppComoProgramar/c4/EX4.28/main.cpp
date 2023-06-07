#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int irow = 0;

	while (irow < 8)
	{
		if (0 != irow % 2)
		{
			cout << " ";
		}

        int jcolumn = 0;
		while (jcolumn < 8)
		{
			cout << "* ";
			jcolumn++;
		}
		cout << "\n";
		irow++;
	}

	return 0;
}
