#include <iostream>
#include <string>

using namespace std;

int main() {
  int id1, id2, id3;
  string title1, title2, title3;

  cout << "Enter Book 1 ID: ";
  cin >> id1;
  cout << "Enter Book 1 Title: ";
  cin.ignore(); // Clear the newline character left in the buffer
  getline(cin, title1);

  cout << "Enter Book 2 ID: ";
  cin >> id2;
  cout << "Enter Book 2 Title: ";
  cin.ignore();
  getline(cin, title2);

  cout << "Enter Book 3 ID: ";
  cin >> id3;
  cout << "Enter Book 3 Title: ";
  cin.ignore();
  getline(cin, title3);

  cout << "\n===== LIBRARY BOOKS =====\n";
  cout << "Book ID: " << id1 << "\n";
  cout << "Book Title: " << title1 << "\n\n";

  cout << "Book ID: " << id2 << "\n";
  cout << "Book Title: " << title2 << "\n\n";

  cout << "Book ID: " << id3 << "\n";
  cout << "Book Title: " << title3 << "\n";

  return 0;
}