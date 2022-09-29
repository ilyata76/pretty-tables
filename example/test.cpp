#include <prettytables.hpp>

/* prettytable PYTHON
+-----------+------------+
| City name | Population |
+-----------+------------+
| Adelaide  |  1158259   |
| Brisbane  |  1857594   |
| Darwin    |   120900   |
| Hobart    |   205556   |
| Melbourne |  3806092   |
| Perth     |  1554769   |
| Sydney    |  4336374   |
+-----------+------------+
*/

/* our pretty table
+-----------+------------+
| City name | Population |
+-----------+------------+
| Adelaide  | 1158259    |
| Brisbane  | 1857594    |
| Darwin    | 120900     |
| Hobart    | 205556     |
| Melbourne | 3806092    |
| Perth     | 1554769    |
| Sydney    | 4336374    |
+-----------+------------+
*/

int main() {
	Table t;
	t.set_headers(Row{ { "City name", "Population" } });
	t <<
		Row{ { "Adelaide"    , std::to_string(1158259) } } <<
		Row{ { "Brisbane"	, std::to_string(1857594) } } <<
		Row{ { "Darwin"		, std::to_string(120900) } } <<
		Row{ { "Hobart"		, std::to_string(205556) } } <<
		Row{ { "Melbourne"	, std::to_string(3806092) } } <<
		Row{ { "Perth"		, std::to_string(1554769) } } <<
		Row{ { "Sydney"		, std::to_string(4336374) } };
	t.add_row(Row{ {"a", "b"} }); t.pop_back();
	std::cout << t << "\n";
	return 0;
}