# pretty-tables
```cpp
	Table t;
	t.set_headers(Row{ { "h1", "h2" } });
	t.add_row(Row{ { "a", "b" } });
	t.add_row(Row{ { "a", "b" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t.add_row(Row{ { "aasdfsadgf", "basdgdasfg" } });
	t << Row{ { "zcvbzcxvbzcvb", "basdxcvbxcvbcxvbxcvbgdasfg" } }
	<< Row{ {"a", "a"} };
	t.pop_back();
	std::cout << t;
```
```
+——————————————+———————————————————————————+
|h1            |h2                         |
+——————————————+———————————————————————————+
|a             |b                          |
|a             |b                          |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|aasdfsadgf    |basdgdasfg                 |
|zcvbzcxvbzcvb |basdxcvbxcvbcxvbxcvbgdasfg |
+——————————————+———————————————————————————+
```