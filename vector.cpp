#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

int main( int argc, char** args )
{
	std::vector<string> vNames;
	vNames.push_back( "Fabian" );
	vNames.push_back( "Hasan" );
	vNames.push_back( "Daniel" );
	vNames.push_back( "Kai" );

	for ( int i = 0; i < vNames.size(); ++i )
	{
		cout << vNames.at( i ) << " ";
	}
	cout << endl;
	return 0;
}
