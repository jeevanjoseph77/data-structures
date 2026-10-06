#include <iostream>
using namespace std;

int main() {
  int book[10];
  int n = 0;
  int choice;
  int searchID;

  do {
    cout << "\n\n===== SMART LIBRARY =====";
    cout << "\n1. Add Book";
    cout << "\n2. Display Books";
    cout << "\n3. Search Book";
    cout << "\n4. Exit"; // Fixed: Added missing semicolon
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
      // Added array bounds check to prevent overflow
      if (n < 10) {
        cout << "Enter Book ID: ";
        cin >> book[n];
        n++;
        cout << "Book Added!\n";
      } else {
        cout << "Library is full (Max 10 books)!\n";
      }
    } else if (choice == 2) {
      cout << "\nBooks in Library:\n";
      if (n == 0) {
        cout << "No books in the library yet.\n";
      } else {
        for (int i = 0; i < n; i++) {
          cout << "Book ID: " << book[i] << endl;
        }
      }
    } else if (choice == 3) {
      cout << "Enter Book ID to search: ";
      cin >> searchID;
      bool found = false;
      for (int i = 0; i < n; i++) {
        if (book[i] == searchID) {
          found = true;
          break; // Exit loop early once found
        }
      }
      if (found) {
        cout << "Book Found!\n";
      } else {
        cout << "Book Not Found!\n";
      }
    } else if (choice == 4) {
      cout << "Thank you!\n"; // Fixed: Placed properly inside the block
    } else {
      cout << "Invalid Choice!\n"; // Fixed: Placed properly inside the block
    }

  } while (choice != 4);

  return 0;
}