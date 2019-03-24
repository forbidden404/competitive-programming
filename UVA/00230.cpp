#include <bits/stdc++.h>

using namespace std;

struct Book {
    string title;
    string author;
    bool isShelved;
    bool isBorrowed;

    Book(string t, string a) : title(t), author(a), isShelved(true), isBorrowed(false) { } 
};

bool comp(Book &lhs, Book &rhs) {
    if (lhs.author == rhs.author) {
        return lhs.title < rhs.title;
    } else {
        return lhs.author < rhs.author;
    }
}

int main() {
    string s;

    vector<Book> books;
    books.reserve(10000);

    getline(cin, s);
    while (s != "END") {
        auto found = s.find("\"", 1);
        auto title = s.substr(1, found - 1);
        found = s.find("by", found);
        found += 3;

        auto author = s.substr(found);
        Book b(title, author);
        books.push_back(b);

        getline(cin, s);
    }

    sort(books.begin(), books.end(), comp);

    getline(cin, s);
    while (s != "END") {
        if (s.find("BORROW") != string::npos) {
            auto found = s.find("\"");
            found++;
            auto end = s.find("\"", found+1);
            auto title = s.substr(found, end - found);

            const auto p = std::find_if(books.begin(), books.end(),
                    [title] (const Book &b) { return b.title == title; } );
            if (p != books.end()) {
                (*p).isShelved = false;
                (*p).isBorrowed = true;
            }
        } else if (s.find("RETURN") != string::npos) {
            auto found = s.find("\"");
            found++;
            auto end = s.find("\"", found+1);
            auto title = s.substr(found, end - found);

            const auto p = std::find_if(books.begin(), books.end(),
                    [title] (const Book &b) { return b.title == title; } );
            if (p != books.end()) {
                (*p).isShelved = false;
                (*p).isBorrowed = false; 
            }
        } else if (s.find("SHELVE") != string::npos) {
            if (books[0].isShelved == false && books[0].isBorrowed == false) {
                books[0].isShelved = true;
                cout << "Put \"" << books[0].title << "\" first" << endl;
            }

            for (int i = 1; i < books.size(); i++) {
                if (books[i].isShelved == false && books[i].isBorrowed == false) {
                    books[i].isShelved = true;
                    cout << "Put \"" << books[i].title << "\"";
                    for (int j = i-1; j >= 0; j--) {
                        if (books[j].isBorrowed != true) {
                            cout << " after \"" << books[j].title << "\"" << endl;
                            break; 
                        }
                        if (j == 0) {
                            cout << " first" << endl;
                        }
                    }
                }
            }
            cout << "END" << endl;
        }
        getline(cin, s);
    }

    return 0;
}
