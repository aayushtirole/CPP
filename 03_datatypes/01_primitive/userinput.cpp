#include <iostream>   // Input-output (cin, cout) ke liye
#include <string>     // String class ko use karne ke liye

using namespace std;

int main() {
    // ---------------- STRING ----------------
    string userTea;   // User ki input (tea ka naam) store karega
    int teaQuantity;  // Quantity (cups) store karega

    // ---------------- USER INPUT ----------------
    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);
    /*
    - getline(cin, userTea) → Puri line ko input lega (space ke saath).
      Example: "Masala Tea" (agar sirf cin >> userTea karte to 
      sirf "Masala" hi leta, "Tea" skip ho jata).
    */

    // ---------------- ASK FOR QUANTITY ----------------
    cout << "How many cups of " << userTea << " would you like to have? ";
    cin >> teaQuantity;
    /*
    - yaha user ek number enter karega (e.g. 2).
    - Agar user accidentally text dal de (e.g. "two") 
      to program input error me chala jayega.
    */

    // ---------------- OUTPUT ----------------
    cout << "\nOrder Summary:\n";
    cout << "Tea: " << userTea << endl;
    cout << "Quantity: " << teaQuantity << endl;
    /*
    - Output ko thoda formatted kiya gaya hai taki user ko clear dikhe.
    */

    return 0; // Program successful execution
}
