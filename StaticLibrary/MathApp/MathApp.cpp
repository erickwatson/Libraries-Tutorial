// MathApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Utility.h"
#include <iostream>
#include "../MathLib/MathLibrary.h"

using namespace std;

int main()
{
	double sum = MathLibrary::Functions::Divide(2, 3);

	cout << MathLibrary::Functions::Subtract(11, 5) << std::endl;
	system("pause");
    return 0;
}

