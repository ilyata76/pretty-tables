#include "..\include\prettytables.hpp"

Table::Table() {
	this->vertical_separator = "|";
	this->horizontal_separator = "—";
	this->intersection_separator = "+";

	this->row_size = 0;
}

std::ostream& operator<<(std::ostream& out, const Row& row) {

	for (const auto& element : row.container) {
		out << element;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Table& table) {
	std::vector<std::string> horizontal_separators;
	int element_size = 0;

	// int j = 0; j < table.container.size(); ++j
	for (int j = 0; j < table.container.size(); ++j) {
		horizontal_separators.push_back(table.vertical_separator); //

		// int i = 0; table.container[j].size(); ++i

		for (int i = 0; i < table.container[j].container.size(); ++i) {
			auto element = table.container[j].container[i];
			out << table.vertical_separator << element;

			element_size = element.size();

			for (int k = 0; k < element_size; ++k) {
				horizontal_separators.push_back(table.horizontal_separator);
			} horizontal_separators.push_back(table.intersection_separator);

		}
		horizontal_separators.pop_back();
		horizontal_separators.push_back(table.vertical_separator); //

		out << table.vertical_separator;
		out << '\n';
		for (const auto& separator : horizontal_separators) {
			out << separator;
		} out << '\n';

		horizontal_separators.clear();
	}
	
	return out;
}

Row::Row() {
	//
}
