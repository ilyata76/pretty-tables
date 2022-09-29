# pretty-tables
Example:
```cpp
int main() {
	Table t;
	t.set_headers(Row{ { "No", "City name", "Population" } });
    t.colored = true;

	Row rows[] = {
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

	t.add_row(Row{ {"a", "b"} }); 
		t.pop_back();

	std::cout << t << "\n";

	return 0;
}
```
result:
```
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
```

## colored mode

![colored](https://github.com/ilyata76/pretty-tables/tree/master/img/colored_table.png)