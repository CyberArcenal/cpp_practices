# 📘 CC101 UNIT 1–3: COMBINED REVIEWER + CHEAT SHEET

> **Para sa exam mo bukas!**  
> Naka-organize per topic, may tables, code snippets, at key points.  
> Good luck! 💪

---

## 1️⃣ PROGRAMMING BASICS

| Term | Meaning |
|---|---|
| **Programming** | Pag-iisip ng instructions para sa computer. |
| **Coding** | Pagsusulat ng instructions sa language na naiintindihan ng computer. |
| **Source Code** | Written instructions; “recipe” ng computer. |

💡 **Tip:** Programming = mental process. Coding = writing process.

---

## 2️⃣ GENERATIONS OF PROGRAMMING LANGUAGES

| Gen | Era | Name | Example |
|---|---|---|---|
| 1st | 1940s | Machine Language | `10110000 01100001` |
| 2nd | 1950s | Assembly Language | `MOV AX, 61h` |
| 3rd | 1960s–1980s | High-level | C, C++, Java |
| 4th | 1980s–1990s | Declarative | SQL, MATLAB |
| 5th | 1990s–Present | AI / Logic | Prolog, LISP |

**Popular Languages & Uses:**
- **C** – OS, embedded
- **C++** – games, simulations
- **Java** – Android, enterprise
- **Python** – AI, automation
- **JavaScript** – websites
- **PHP** – web servers
- **SQL** – databases
- **MATLAB** – numerical analysis
- **Prolog** – AI chatbots
- **LISP** – AI research

---

## 3️⃣ PROGRAM DEVELOPMENT LIFE CYCLE (PDLC)

1. **Problem Definition** – define problem & boundaries.
2. **Problem Analysis** – requirements, resources, variables.
3. **Algorithm Development** – step-by-step procedure.
4. **Coding & Documentation** – write actual code.
5. **Testing & Debugging** – test various inputs.
6. **Maintenance** – after implementation; repeat if may enhancement.

---

## 4️⃣ COMPILATION vs INTERPRETATION

| Feature | Compilation | Interpretation |
|---|---|---|
| Definition | Buong code bago execute | Line-by-line |
| Speed | Mabilis pagkatapos | Mas mabagal |
| Errors | Lahat ng errors after compile | Stops at first error |
| Output | `.exe`, `.out` | Walang executable |
| Examples | C, C++, Java | Python, JS, Ruby |

**Analogy:**
- Compilation = baking a cake completely.
- Interpretation = acting a play from a script.

---

## 5️⃣ SYNTAX vs SEMANTICS

| Aspect | Syntax | Semantics |
|---|---|---|
| Refers to | Form / structure | Meaning / logic |
| Checked by | Compiler / interpreter | Programmer / runtime |
| Error Example | Missing `;` | Division by zero |
| Stops Program? | Yes – won’t run | Not always – wrong results |

**Examples:**
- Syntax Error: `int = x5;`
- Semantic Error: `int result = a / b;` where `b = 0`

---

## 6️⃣ ALGORITHM & PSEUDOCODE

**Algorithm** – set of finite rules to solve a problem.

**7 Characteristics:**
1. Clear & Unambiguous
2. Well-defined Inputs
3. Well-defined Outputs
4. Finiteness
5. Feasible
6. Language Independent
7. Effectiveness

**Pseudocode Rules:**
- START / END
- One action per step
- INPUT / OUTPUT
- IF-THEN-ELSE
- FOR, WHILE, REPEAT UNTIL
- Indent nested blocks
- Reserved words in UPPERCASE

**Common Reserved Words:**
`START`, `END`, `INPUT`, `OUTPUT`, `DECLARE`, `SET`, `IF`, `THEN`, `ELSE`, `ENDIF`, `FOR`, `WHILE`, `REPEAT UNTIL`

**Relationship:**
ALGORITHM → PSEUDOCODE → PROGRAM  
(Idea → Sketch → Working Version)

---

## 7️⃣ FLOWCHARTS

**Symbols:**
| Symbol | Shape |
|---|---|
| Terminal | Oval |
| Input/Output | Parallelogram |
| Process | Rectangle |
| Decision | Diamond |
| Preparation | Hexagon |
| Connector | Circle |
| Flowline | Arrow |

**Rules:**
- Start with START, end with END.
- All symbols connected with flowline.
- Each decision has two outcomes.
- Flow top-to-bottom or left-to-right.

---

## 8️⃣ C++ BASICS

**Structure:**
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Hello" << endl;
    return EXIT_SUCCESS;
}
```

**Key Parts:**
- `#include <iostream>` – I/O header
- `using namespace std;` – allow `cout`, `cin`
- `int main()` – entry point
- `{ }` – body
- `;` – end of statement
- `return EXIT_SUCCESS;` – success

**I/O:**
- Output: `cout << "text";`
- Input: `cin >> variable;`
- String with spaces: `getline(cin, variable);`
- Clear buffer: `cin.ignore();`
- New line: `endl` or `"\n"`

**Comments:**
- Single: `// comment`
- Multi: `/* comment */`

---

## 9️⃣ VARIABLES, CONSTANTS, LITERALS

**Variable** – named storage with type and value.

**Rules for Naming:**
- Letters, digits, underscores.
- Start with letter or `_`.
- Case-sensitive.
- No spaces/special chars.
- camelCase for multi-word.
- Cannot use reserved words.

**Data Types:**
| Type | Size | Range / Description |
|---|---|---|
| short | 2 bytes | -32,768 to 32,768 |
| int | 2 bytes | -32,768 to 32,768 |
| long | 4 bytes | -2,147,483,648 to 2,147,483,648 |
| float | 4 bytes | decimal |
| double | 8 bytes | decimal |
| char | 1 byte | letter, number, symbol |
| bool | 1 byte | true / false |
| string | 1 byte/char | 0+ characters |

**Constants:**
```cpp
const int MAX_VALUE = 100;
const double PI = 3.14159;
```

**Literals:**
- Integer: `42`, `052`, `0x2A`
- Floating: `3.14159`, `6.022e23`
- Character: `'A'`, `'\n'`
- String: `"Hello"`
- Boolean: `true`, `false`

---

## 🔟 OPERATORS

**Arithmetic:**
| Op | Name |
|---|---|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulus |
| ++ | Increment |
| -- | Decrement |

**Order of Precedence:**
1. `( )`
2. `* / %`
3. `+ -`

**Assignment:**
| Op | Example | Same As |
|---|---|---|
| = | x = 5 | x = 5 |
| += | x += 3 | x = x + 3 |
| -= | x -= 3 | x = x - 3 |
| *= | x *= 3 | x = x * 3 |
| /= | x /= 3 | x = x / 3 |
| %= | x %= 3 | x = x % 3 |

**Comparison:**
`==`, `!=`, `>`, `<`, `>=`, `<=`  
Returns `1` (true) or `0` (false).

**Logical:**
| Op | Name | Example |
|---|---|---|
| && | AND | x < 5 && x < 10 |
| \|\| | OR | x < 5 \|\| x < 4 |
| ! | NOT | !(x < 5) |

**Example Evaluation:**
```cpp
x = 4324 % 7 - 2 * (15 - 30 / 6) + 84 / 3;
// x = 4324 % 7 - 2 * (15 - 5) + 84 / 3
// x = 5 - 2 * 10 + 84 / 3
// x = 5 - 20 + 28
// x = 13
```

---

## ⚠️ COMMON EXAM TRAPS

- `=` assignment vs `==` comparison
- Syntax error vs Semantic error
- `cin` vs `getline`
- Integer division vs float division
- Missing `;`
- Uninitialized variables
- `endl` vs `"\n"`

---

## 🧠 LAST MINUTE REVIEW

1. **Programming** = thinking. **Coding** = writing.
2. **1st Gen** = binary. **2nd Gen** = mnemonics. **3rd Gen** = high-level.
3. **PDLC** = Definition → Analysis → Algorithm → Coding → Testing → Maintenance.
4. **Compilation** = whole code. **Interpretation** = line-by-line.
5. **Syntax** = form. **Semantics** = meaning.
6. **Algorithm** = 7 characteristics.
7. **Pseudocode** = START, END, INPUT, OUTPUT, IF-THEN-ELSE.
8. **Flowchart** = Oval (START/END), Parallelogram (I/O), Rectangle (Process), Diamond (Decision).
9. **C++** = `#include`, `using namespace std;`, `int main()`, `cout`, `cin`, `return EXIT_SUCCESS;`.
10. **Data Types** = int (2), long (4), float (4), double (8), char (1), bool (1).
11. **Operators** = `+ - * / % ++ --`, `= += -= *= /= %=`, `== != > < >= <=`, `&& || !`.
12. **Precedence** = `( )` → `* / %` → `+ -`.