// Class Session 5.cpp

#include <iostream>
#include <string>


struct advertising {
	int number_of_ads;
	double clicked_ads;
	double avg_money_per_click;
};

advertising get_advertising_data() {
	advertising day{
	std::cout << " How many ads were shown today?: ";
	std::cin >> day.number_of_ads << std::endl;
	std::cout << " How many percentege of ads were clicked by users?: ";
	std::cin >> day.clicked_ads << std::endl;
	std::cout << " Money earned per click :";
	std::cin >> day.avg_money_per_click;
	}
}


void print_earnings(advertising ad){

	std::cout << " Number of ads shown to users: " << ad.number_of_ads << "/n";
	std::cout << " Percentege of ads clicked by users: " << ad.clicked_ads << "% /n";
	std::cout << " Money earned per click: " << ad.avg_money_per_click << "/n"
	std::cout << " Total earnings: " << 
}

int main() {

}

// Notes and examples from the class

////inheritance in structs
//
//struct father {
//    long money;
//    std::string car;
//};
//
////One way to do it
//
//struct child : public father{
//    std::string name;
//};
//
//
//
//int main()
//{
//    father GodFather;
//    child son;
//
//    
//
//}

