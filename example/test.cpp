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
+-----+-----------+------------+
| No  | City name | Population |
+-----+-----------+------------+
| 1   | Adelaide  | 1158259    |
| 2   | Brisbane  | 1857594    |
| 3   | Darwin    | 120900     |
| 4   | Hobart    | 205556     |
| 5   | Melbourne | 3806092    |
| 6   | Perth     | 1554769    |
+-----+-----------+------------+
цветная!!!
*/

int main() {
	Table t;
	t.set_headers(Row{ { "No", "City name", "Population" } });
    t.colored = true;

	Row rows[] = {
		createRow({ "0", "BBB", "CCC" }),
		Row{ { "1", "Adelaide"    , std::to_string(1158259) } },
		Row{ { "2", "Brisbane"	, std::to_string(1857594) } },
		Row{ { "3", "Darwin"		, std::to_string(120900) } },
		Row{ { "4", "Hobart"		, std::to_string(205556) } },
		Row{ { "5", "Melbourne"	, std::to_string(3806092) } },
		Row{ { "6", "Perth"		, std::to_string(1554769) } },
		Row{ { "7", "Sydney"		, std::to_string(4336374) } }
	};

	for (const auto& x : rows) {
		t << x;
	}

	t.add_row(Row{ {"a", "b", "c"} }); 
		t.pop_back();

	std::cout << t << "\n";

	return 0;
}