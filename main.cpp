#include <iostream>
using	namespace	std;
#include"linked_list.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	linked_list	l1;
	linked_list	l2,l3,l4;
	l1.create_list(1);
	l1.create_list(2);

	l1.display();
	cout<<endl;
	l1.count_nonzeros_oddelements_evenelements();
	l2.create_list(3);
	l2.concatenate(l1);
	l2.display();
	cout<<endl;
	
	l3.create_list(0);
	l3.create_list(6);
	l3.create_list(8);
	l3.create_list(9);
	l3.split(2);

	l4.copy(l1,l2);
	l3.remove_first_node_and_insert_at_the_end();
	l3.remove_end_node_and_insert_at_the_begining();
 
	l3.display();
	l3.count_nonzeros_oddelements_evenelements();
	l1.largest_smallest_number_and_total_average();
	l4.move_evens_to_list2_odds_to_list3( l2,l3);
	l4.display();
	return 0;
}
