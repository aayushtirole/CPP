OPERATOR 

1. Unary 
2. Binary 
3. Ternary 


<!--------------------------------------------------------------------------------------->

## **1. Arithmetic Operators**

Used for **mathematical calculations**.

| Operator | Meaning             | Example & Output      |
| -------- | ------------------- | --------------------- |
| `+`      | Addition            | `5 + 3 = 8`           |
| `-`      | Subtraction         | `5 - 3 = 2`           |
| `*`      | Multiplication      | `5 * 3 = 15`          |
| `/`      | Division            | `10 / 2 = 5`          |
| `%`      | Modulus (remainder) | `10 % 3 = 1`          |
| `++`     | Increment           | `int x=5; x++; → x=6` |
| `--`     | Decrement           | `int x=5; x--; → x=4` |

Example :- 

int a = 10, b = 3;

cout << a + b << endl; // + : Addition → 10 + 3 = 13
cout << a - b << endl; // - : Subtraction → 10 - 3 = 7
cout << a * b << endl; // * : Multiplication → 10 * 3 = 30
cout << a / b << endl; // / : Division (integer) → 10 / 3 = 3
cout << a % b << endl; // % : Modulus → remainder of 10/3 = 1
a++;                   // ++ : Increment → a = 11
cout << a << endl;
b--;                   // -- : Decrement → b = 2
cout << b << endl;

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **2. Relational Operators**

Used to **compare values**; returns `true` or `false`.

| Operator | Meaning          | Example & Output |
| -------- | ---------------- | ---------------- |
| `==`     | Equal to         | `5 == 5 → true`  |
| `!=`     | Not equal        | `5 != 3 → true`  |
| `>`      | Greater than     | `5 > 3 → true`   |
| `<`      | Less than        | `5 < 3 → false`  |
| `>=`     | Greater or equal | `5 >= 5 → true`  |
| `<=`     | Less or equal    | `5 <= 3 → false` |

cout << (a == b) << endl; // == : Equal to → 11 == 2 → false (0)
cout << (a != b) << endl; // != : Not equal → 11 != 2 → true (1)
cout << (a > b) << endl;  // > : Greater than → 11 > 2 → true (1)
cout << (a < b) << endl;  // < : Less than → 11 < 2 → false (0)
cout << (a >= b) << endl; // >= : Greater or equal → 11 >= 2 → true (1)
cout << (a <= b) << endl; // <= : Less or equal → 11 <= 2 → false (0)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **3. Logical Operators**

Used for **combining conditions**.

| Operator | Meaning                     | Example & Output      |                                   |        |   |               |
| -------- | --------------------------- | --------------------- | --------------------------------- | ------ | - | ------------- |
| `&&`     | AND (true if both are true) | `(5>3 && 3>2) → true` |                                   |        |   |               |
| \`       |                             | \`                    | OR (true if at least one is true) | \`(5>3 |   | 2>3) → true\` |
| `!`      | NOT (reverses true/false)   | `!(5>3) → false`      |                                   |        |   |               |

cout << (a > b && b > 0) << endl; // && : AND → true && true = true (1)
cout << (a < b || b > 0) << endl; // || : OR → false || true = true (1)
cout << !(a > b) << endl;         // ! : NOT → !(true) = false (0)

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **4. Bitwise Operators**

Operate on **individual bits of integers**.

| Operator | Meaning     | Example & Output                 |     |               |              |
| -------- | ----------- | -------------------------------- | --- | ------------- | ------------ |
| `&`      | Bitwise AND | `5 & 3 → 1` (0101 & 0011 = 0001) |     |               |              |
| \`       | \`          | Bitwise OR                       | \`5 | 3 → 7\` (0101 | 0011 = 0111) |
| `^`      | Bitwise XOR | `5 ^ 3 → 6` (0101 ^ 0011 = 0110) |     |               |              |
| `~`      | Bitwise NOT | `~5 → -6`                        |     |               |              |
| `<<`     | Left shift  | `5 << 1 → 10`                    |     |               |              |
| `>>`     | Right shift | `5 >> 1 → 2`                     |     |               |              |


int x = 5, y = 3;

cout << (x & y) << endl;  // & : Bitwise AND → 0101 & 0011 = 0001 → 1
cout << (x | y) << endl;  // | : Bitwise OR → 0101 | 0011 = 0111 → 7
cout << (x ^ y) << endl;  // ^ : Bitwise XOR → 0101 ^ 0011 = 0110 → 6
cout << (~x) << endl;     // ~ : Bitwise NOT → ~0101 = 1010 (two's complement) → -6
cout << (x << 1) << endl; // << : Left shift → 0101 << 1 = 1010 → 10
cout << (x >> 1) << endl; // >> : Right shift → 0101 >> 1 = 0010 → 2

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **5. Assignment Operators**

Used to **assign or update values**.

| Operator | Meaning             | Example           |
| -------- | ------------------- | ----------------- |
| `=`      | Assign              | `int a = 10;`     |
| `+=`     | Add and assign      | `a += 5 → a = 15` |
| `-=`     | Subtract and assign | `a -= 3 → a = 12` |
| `*=`     | Multiply and assign | `a *= 2 → a = 24` |
| `/=`     | Divide and assign   | `a /= 4 → a = 6`  |
| `%=`     | Modulus and assign  | `a %= 4 → a = 2`  |


int m = 10;

m += 5; cout << m << endl; // += : Add & assign → 10 + 5 = 15
m -= 3; cout << m << endl; // -= : Subtract & assign → 15 - 3 = 12
m *= 2; cout << m << endl; // *= : Multiply & assign → 12 * 2 = 24
m /= 4; cout << m << endl; // /= : Divide & assign → 24 / 4 = 6
m %= 4; cout << m << endl; // %= : Modulus & assign → 6 % 4 = 2

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **6. Ternary (Conditional) Operator**

* Works with **three operands**.
* Syntax: `condition ? expr1 : expr2`

int max = (a > b) ? a : b; // ?: → If a > b, max = a, else max = b → max = 11
cout << max << endl;


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **7. Unary Operators**

Operate on **a single operand**.

| Operator | Meaning               | Example         |
| -------- | --------------------- | --------------- |
| `++`     | Increment             | `++x` or `x++`  |
| `--`     | Decrement             | `--x` or `x--`  |
| `+ / -`  | Unary plus/minus      | `-a`            |
| `!`      | Logical NOT           | `!true → false` |
| `~`      | Bitwise NOT           | `~5 → -6`       |
| `&`      | Address of            | `&a`            |
| `*`      | Pointer dereference   | `*ptr`          |
| `sizeof` | Size of variable/type | `sizeof(int)`   |

int n = 5;

cout << ++n << endl; // ++ : Pre-increment → n = 6
cout << n-- << endl; // -- : Post-decrement → prints 6, then n = 5
cout << -n << endl;  // - : Unary minus → -5
cout << +n << endl;  // + : Unary plus → +5
cout << !true << endl;// ! : Logical NOT → false (0)
cout << ~n << endl;  // ~ : Bitwise NOT → -6
cout << &n << endl;  // & : Address of variable n


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## **8. Other Operators**

| Operator       | Meaning                   | Example                       |
| -------------- | ------------------------- | ----------------------------- |
| `.`            | Access member of object   | `obj.x`                       |
| `->`           | Access member via pointer | `ptr->x`                      |
| `::`           | Scope resolution          | `std::cout`                   |
| `,`            | Comma operator            | `a = (b, c) → a = c`          |
| `typeid`       | Type information          | `typeid(a).name()`            |
| `new / delete` | Dynamic memory allocation | `int* p = new int; delete p;` |

struct Point { int x; int y; };
Point p = {10, 20};
Point* ptr = &p;

cout << p.x << endl;    // . : Access member of object → 10
cout << ptr->y << endl; // -> : Access member via pointer → 20
cout << sizeof(a) << endl; // sizeof : Size of variable/type → 4 bytes
int q;
q = (a, b);             // , : Comma operator → q = b → 2

int* ptr2 = new int;    // new : Allocate memory dynamically
*ptr2 = 50;             // Assign value
delete ptr2;            // delete : Deallocate memory


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

