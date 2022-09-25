#pragma once

#ifndef PRETTYTABLES_HPP
#define PRETTYTABLES_HPP

	#include <vector>
	#include <string>
	#include <iostream>

	class Row {
		public: // на время
			std::vector<std::string> container;
		public:
			Row();

		friend class Table;

		friend std::ostream& operator<<(std::ostream& out, const Row& row);
	};

	class Table {
		public: // на время
			std::vector<Row> container;
			
			std::string vertical_separator;
			std::string horizontal_separator;
			std::string intersection_separator;

			int row_size;
		public:
			Table();

			friend Table& operator<<(Table& out, const Row& in);

			friend std::ostream& operator<<(std::ostream& out, const Table& table);
	};


#endif // !PRETTYTABLES_HPP
