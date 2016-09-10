#include <iostream>
using namespace std;
#include "../csv_reader.h"

int main() {
    try {
        CSV_Reader* reader = new CSV_Reader("test.csv");
        while(reader->is_next()) {
            CSV_Row row = reader->get_next_row();
            cout << row.get_double_at(1) << endl;
        }
    } catch(const char* s) {
        cout << "Error: " << s <<endl;
        return -1;
    }
    return 0;
}
