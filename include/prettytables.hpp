#pragma once

#ifndef PRETTYTABLES_HPP
#define PRETTYTABLES_HPP

	#include <vector>
	#include <string>
	#include <iostream>
	#include <iomanip>
	//#include <algorithm>
	
	// TODO template
	class Row {
		private: // на время
			std::vector<std::string> container;
		public:
			Row();
			Row(std::vector<std::string> row);

			bool set_container(std::vector<std::string> row);

			size_t size() const;

			std::string& operator[](int index);

		friend class Table;

		friend std::ostream& operator<<(std::ostream& out, Row& row);
		friend std::ostream& operator<<(std::ostream& out, Table& table);
	};

	class Table {
		private: // на время
			Row headers;
			std::vector<int> element_width;
			std::vector<Row> container;
			
			std::string vertical_separator;
			std::string horizontal_separator;
			std::string intersection_separator;

			int row_size;
		public:
			Table();

			size_t size() const;

			Row& operator[](int index);

			bool set_headers(Row headers);
			bool add_row(Row row);

			void pop_back();

			// плохо работает (таблица съезжает)
			bool set_vertical_separator(std::string separator);

			// плохо работает (таблица съезжает)
			bool set_horizontal_separator(std::string separator);

			// плохо работает (таблица съезжает)
			bool set_intersection_separator(std::string separator);

		friend Table& operator<<(Table& out, Row& in);

		friend std::ostream& operator<<(std::ostream& out, Table& table);
	};


#endif // !PRETTYTABLES_HPP
