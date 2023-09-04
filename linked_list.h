#ifndef	LINKED_LIST
#define	LINKED_LIST
#include"node.h"
struct	linked_list{
	struct	node	*start=NULL;
	void	create_list(int	data);
	void	display();
	void	concatenate(linked_list	l);
	void	split(int	pos);
	void	copy(linked_list	l1,linked_list	l2);
	void	remove_first_node_and_insert_at_the_end();
	void	remove_end_node_and_insert_at_the_begining();
	void	swap_first_and_last_part_by_exchanging_info();
	void	count_number_of_an_element_occurences(int	data);
	void	count_nonzeros_oddelements_evenelements();
	void 	largest_smallest_number_and_total_average() ;
	void	move_evens_to_list2_odds_to_list3(linked_list l2, linked_list l3);
	
};
#endif
