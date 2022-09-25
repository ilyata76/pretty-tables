#include "..\include\prettytables.hpp"

Table::Table() {

}

std::ostream& operator<<(std::ostream& out, const Row& row) {

	for (const auto& element : row.container) {
		out << element;
	}

	return out;
}

std::ostream& operator<<(std::ostream& out, const Table& table) {
	
	for (const auto& row : table.container) {
		out << row << std::endl;
	}
	
	return out;
}

Row::Row() {
	this->size = 0;
}
