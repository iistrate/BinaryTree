#include "App.h"
#include <iostream>
#include <istream>

void App::start() {
	m_running = true;
	do {
		std::cout << "Please enter 1 to insert node; 2 for in order; 3 for pre order; 4 for post order: ";
		std::cin >> m_userInput;
		switch (m_userInput)
		{
		case INSERT:
			break;
		case PRINT_IN_ORDER:
			break;
		case PRINT_POST_ORDER:
			break;
		case PRINT_PRE_ORDER:
			break;
		}
	} while (m_running);
}