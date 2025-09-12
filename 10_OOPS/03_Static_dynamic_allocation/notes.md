# Memory Allocation

## 1. Static Allocation

* Object is created on the **stack**.
* Memory is automatically managed.
* Syntax: `Hero h1;`
* Access members using `.` operator: `h1.setHealth(70);`
* Faster than dynamic allocation.

## 2. Dynamic Allocation

* Object is created on the **heap**.
* Memory must be manually managed (use `new` and `delete`).
* Syntax: `Hero* h2 = new Hero();`
* Access members using `->` operator: `h2->setHealth(90);`
* Useful when size or lifetime of object is not known at compile time.

## 3. Key Points

* Static allocation is simpler and faster.
* Dynamic allocation is flexible but requires manual memory management.
* Always delete dynamically allocated objects to avoid memory leaks.

## 4. Example

```cpp
// Static
Hero h1;
h1.setHealth(70);
h1.setLevel('A');

// Dynamic
Hero* h2 = new Hero();
h2->setHealth(90);
h2->setLevel('B');
delete h2;
```
