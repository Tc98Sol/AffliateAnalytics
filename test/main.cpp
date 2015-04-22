#include<iostream>
#include "FlipkartDataSource.h"

using namespace Tc98::AffliateAnalytics;
int main()
{
	std::cout << "Affliate Analytics Initializing." << std::endl;

	FlipkartDataSource obj;
	obj.SendRequest();

	int x;
	std::cin >> x;
	return 0;
}