#include <iostream>

void main() {
	char ucl;
	char winners;
	char* d = "Germany";
	char* dd = "germany";

	printf("\tMultiple Choice Quiz!\n\n");
	/*-----------------------------------------------------*/
	printf("1) How many UCL has Madrid won? \n\n\t");
	printf("A. 5\t B. 11\t C. 8\t D. 3\n\n\t");
	std::cin >> ucl;

	if ((ucl == 'B') || (ucl == 'b') || (ucl == '11')) {
		std::cout << "CORRECT" << std::endl;
	}
	else {
		std::cout << "WRONG\n" << std::endl;
	}
	/*--------------------------------------------------------*/
	printf("2) Which country won the 2014 World Cup? \n\n\t");

	printf("A. France\t B. Brazil\t C. Spain\t D. Germany \n\n\t");
	std::cin >> winners;

	if ((winners == 'D') || (winners == 'd')) {
		std::cout << "Correct" << "\n\n" << std::endl;
	}
	else {
		std::cout << "WRONG\n" << std::endl;
	}

	

	system("PAUSE");
	//return 0;
}