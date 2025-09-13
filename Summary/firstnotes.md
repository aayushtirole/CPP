# OOPs - Class and Objects Notes

## 1. Class and Objects

* **Class:** Blueprint of an object containing properties (data members) and functions (methods).
* **Object:** Instance of a class stored in memory.

```cpp
#include <iostream>
using namespace std;

class Hero {
public:
    int health;
    char level;
};

int main() {
    Hero h1; // Object creation
    h1.health = 100;
    h1.level = 'A';
    cout << h1.health << " " << h1.level << endl;
}
```

*Comment: Hero is class, h1 is object.*

---

## 2. Empty Class

* Class without members.

```cpp
class EmptyClass {};

int main() {
    EmptyClass e;
    cout << "Empty class object created" << endl;
}
```

*Comment: Demonstrates minimal class structure.*

---

## 3. Access Modifiers

* Control access to class members.
* **private:** Accessible only inside class.
* **public:** Accessible everywhere.
* **protected:** Accessible in class and derived classes.

```cpp
class AccessDemo {
private:
    int a;
public:
    int b;
protected:
    int c;
};
```

---

## 4. Getter & Setter

* **Getter:** Access private members.
* **Setter:** Modify private members.

```cpp
class Hero {
private:
    int health;
public:
    void setHealth(int h) { health = h; }
    int getHealth() { return health; }
};

int main() {
    Hero h;
    h.setHealth(100);
    cout << h.getHealth();
}
```

*Comment: Encapsulation using getter and setter.*

---

## 5. BTS of Objects (Behind the Scenes)

* Objects are memory blocks storing data members.
* **Static allocation:** Memory allocated at compile time (stack).
* **Dynamic allocation:** Memory allocated at runtime (heap).

```cpp
Hero h1;         // Stack memory
Hero *h2 = new Hero(); // Heap memory
delete h2;       // Free dynamic memory
```

---

## 6. Static vs Dynamic Allocation

```cpp
// Static allocation
Hero h1;
h1.health = 100;

// Dynamic allocation
Hero *h2 = new Hero();
h2->health = 200;
delete h2;
```

*Comment: Static objects auto deleted when scope ends, dynamic objects manual delete.*

---

## 7. Constructor

* Special function called at object creation.
* **Default constructor:** No arguments.
* **Parameterized constructor:** With arguments.

### Default Constructor

```cpp
class Hero {
public:
    int health;
    Hero() { health = 100; cout << "Default Constructor Called" << endl; }
};
```

### Parameterized Constructor

```cpp
class Hero {
public:
    int health;
    Hero(int h) { health = h; }
};
```

### `this` Keyword

* Pointer to current object.

```cpp
void setHealth(int health) { this->health = health; }
```

---

## 8. Copy Constructor

* Creates new object copying existing object.

```cpp
class Hero {
public:
    int health;
    Hero(int h) { health = h; }
    Hero(const Hero &h2) { health = h2.health; }
};

Hero h1(100);
Hero h2 = h1; // Copy constructor
```

---

## 9. Shallow and Deep Copy

```cpp
// Shallow Copy
class Hero {
public:
    int *health;
    Hero(int h) { health = new int(h); }
    Hero(const Hero &h2) { health = h2.health; } // points to same memory
};

// Deep Copy
class Hero {
public:
    int *health;
    Hero(int h) { health = new int(h); }
    Hero(const Hero &h2) { health = new int(*h2.health); } // new memory
};
```

---

## 10. Assignment Operator

* Assigns one object to another.

```cpp
Hero h1(100);
Hero h2(200);
h2 = h1; // Uses assignment operator
```

* Can be overloaded for deep copy.

---

## 11. Destructor

* Special function called when object is destroyed.

```cpp
class Hero {
public:
    int *health;
    Hero(int h) { health = new int(h); }
    ~Hero() { delete health; cout << "Destructor Called" << endl; }
};
```

*Comment: Cleans dynamic memory.*

---

## 12. Static Keyword

* **Static variable:** Shared among all objects.
* **Static function:** Can access only static members.

```cpp
class Hero {
public:
    static int timeToComplete;
    static void showTime() { cout << timeToComplete << endl; }
};
int Hero::timeToComplete = 5;

int main() {
    Hero::showTime();
}
```

*Comment: Static members exist independently of objects.*

---

## Homework

* Create a class `BankAccount` with private balance.
* Use getter and setter.
* Use parameterized constructor.
* Implement deposit and withdraw functions.
* Create 2 objects and demonstrate static member usage.
