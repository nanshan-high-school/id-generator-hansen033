#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int o[9];
	o[0] = 0;
	srand ( time(NULL) );
	for ( int t = 1 ; t < 9 ; t ++ ){
		o[t] = ( rand() % 10 );
	}
	o[0] = ( rand() % 22 );
	switch ( o[0] ){
		case 0:
			o[0] = 10;
			cout << "A";
			break;
		case 1:
			o[0] = 11;
			cout << "B";
			break;
		case 2:
			o[0] = 12;
			cout << "C";
			break;
		case 3:
			o[0] = 13;
			cout << "D";
			break;
		case 4:
			o[0] = 14;
			cout << "E";
			break;
		case 5:
			o[0] = 15;
			cout << "F";
			break;
		case 6:
			o[0] = 16;
			cout << "G";
			break;
		case 7:
			o[0] = 17;
			cout << "H";
			break;
		case 8:
			o[0] = 18;
			cout << "J";
			break;
		case 9:
			o[0] = 19;
			cout << "K";
			break;
		case 10:
			o[0] = 21;
			cout << "M";
			break;
		case 11:
			o[0] = 22;
			cout << "N";
			break;
		case 12:
			o[0] = 23;
			cout << "P";
			break;
		case 13:
			o[0] = 24;
			cout << "Q";
			break;
		case 14:
			o[0] = 27;
			cout << "T";
			break;
		case 15:
			o[0] = 28;
			cout << "U";
			break;
		case 16:
			o[0] = 29;
			cout << "V";
			break;
		case 17:
			o[0] = 30;
			cout << "X";
			break;
		case 18:
			o[0] = 32;
			cout << "W";
			break;
		case 19:
			o[0] = 33;
			cout << "Z";
			break;
		case 20:
			o[0] = 34;
			cout << "I";
			break;
		case 21:
			o[0] = 35;
			cout << "O";
			break;
	}
	for ( int t = 0 ; t < 8 ; t ++ ){
		cout << o[t+1];
	}
	int a = o[0] / 10 + o[0] % 10 * 9 + o[1] * 8 + o [2] * 7 + o[3] * 6 + o[4] * 5 + o[5] * 4 + o[6] * 3 + o[7] * 2 + o[8];
	if ( a % 10 == 0 ){
		cout << "0";
	} else {
		cout << 10 - a % 10;
	} 
	system("pause"); 
	return 0; 
} 