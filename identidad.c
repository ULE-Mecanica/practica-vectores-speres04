#include <iostream>
using namespace std;
int main()
	{
	int M[9][9];
	for (int c=0;c<9;c++)
		{
		 for(int f=0;f<9;f++)
				{
					if(f==c)
					M[f][c]=1;
					else
					M[f][c]=0;
				}
				}
				for (int c=0;c<9;c++)
					{
					 for(int f=0;f<9;f++)
						{
							cout<<M[f][c];
						}
							cout<<endl;
						}
		return 0;
}			
