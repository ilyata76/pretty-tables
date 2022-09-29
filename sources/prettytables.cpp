#include "../include/prettytables.hpp"

Table::Table() {
	this->vertical_separator = "|";
	this->horizontal_separator = "-";
	this->intersection_separator = "+";

	this->row_size = 0;

	this->colored = false;
}

size_t Table::size() const {
	return this->container.size();
}

Row& Table::operator[](size_t index) {
	return this->container[index];
}

bool Table::set_headers(Row headers) {
	this->headers = headers;
	this->row_size = this->headers.size();

	for (const auto& x : this->headers.container) {
		this->element_width.push_back(static_cast<int>(this->headers.size()));
	}

	// скрининг на максимальные элементы
	// скрининг по заголовкам
	for (int j = 0; j < this->headers.size(); j++) {
		this->element_width[j] =
			this->element_width[j] < static_cast<int>(this->headers[j].size()) ?
				static_cast<int>(this->headers[j].size()) : this->element_width[j];
	}

	return true;
}

bool Table::add_row(Row row) {
	if (row.size() == this->headers.size()) {

		// скрининг на максимальные размеры ячеек
		for (int j = 0; j < row.size(); ++j) {
			this->element_width[j] =
				this->element_width[j] < static_cast<int>(row[j].size()) ?
					static_cast<int>(row[j].size()) : this->element_width[j];
		}

		this->container.push_back(row);

		return true;

	} else {
		return false;
	}
}

void Table::pop_back() {
	return this->container.pop_back();
}

bool Table::set_vertical_separator(std::string separator) {
	this->vertical_separator = separator;
	return true;
}

bool Table::set_horizontal_separator(std::string separator) {
	this->horizontal_separator = separator;
	return true;
}

bool Table::set_intersection_separator(std::string separator) {
	this->intersection_separator = separator;
	return true;
}

std::ostream& operator<<(std::ostream& out, Row row) {

	for (const auto& element : row.container) {
		out << ' ' << element;
	}

	return out;
}

Table& operator<<(Table& out, Row in){
	out.add_row(in);
	return out;
}

std::ostream& operator<<(std::ostream& out, Table table) {
	std::vector<std::string> horizontal_separators;
	int element_size = 0; bool colored = false;

	auto get_width = [table](size_t index) {
		return table.element_width[index] + 2;
	};

	// определим horizontal_separators;
	horizontal_separators.push_back(table.intersection_separator);
	for (size_t i = 0; i < table.headers.size(); ++i) {
		element_size = get_width(i);

		for (int k = 0; k < element_size; ++k) {
			horizontal_separators.push_back(table.horizontal_separator);
		} horizontal_separators.push_back(table.intersection_separator);
	}
	horizontal_separators.pop_back();
	horizontal_separators.push_back(table.intersection_separator);

	// функция для разделителя горизонтального
	auto print_horizontal_separators = [&]() {
		for (const auto& separator : horizontal_separators) {
			out << separator;
		}
	}; 
	
	/// используем 
	print_horizontal_separators();  out << '\n';

	// выведем заголовки
	for (size_t i = 0; i < table.headers.size(); ++i) {
		auto element = table.headers[i];
		element_size = get_width(i) - 1;
		out << table.vertical_separator << " " << std::left << std::setw(element_size) << element;
	}

	out << table.vertical_separator;
	out << '\n';

	print_horizontal_separators(); 	out << '\n';

	/*
		https://stackoverflow.com/questions/4053837/colorizing-text-in-the-console-with-c
		Name            FG  BG
		Black           30  40
		Red             31  41
		Green           32  42
		Yellow          33  43
		Blue            34  44
		Magenta         35  45
		Cyan            36  46
		White           37  47
		Bright Black    90  100
		Bright Red      91  101
		Bright Green    92  102
		Bright Yellow   93  103
		Bright Blue     94  104
		Bright Magenta  95  105
		Bright Cyan     96  106
		Bright White    97  107
	*/

	std::string color_mode = "\033[0m";
	std::string not_color_mode = "\033[0m";

	// теперь выводим таблицу
	for (size_t j = 0; j < table.size(); ++j) {

		if (table.colored && !colored) { color_mode = "\033[0m"; colored = true; }
		else if (table.colored && colored) { color_mode = "\x1B[36m"; colored = false; }

		for (size_t i = 0; i < table[j].size(); ++i) {
			auto element = table[j][i];
			element_size = get_width(i) - 1;
			out << table.vertical_separator << color_mode << " " << std::left << std::setw(element_size) << element << not_color_mode;
		}

		out << table.vertical_separator;
		out << '\n';
	}

	print_horizontal_separators();
	
	return out;
}

Row::Row() {
	//
}

Row::Row(std::vector<std::string> row) {
	this->container = row;
}

bool Row::set_container(std::vector<std::string> row) {
	this->container = row;
	return true;
}

size_t Row::size() const {
	return this->container.size();
}

std::string& Row::operator[](size_t index) {
	return this->container[index];
}
