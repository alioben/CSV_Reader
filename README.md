# CSV_Reader
Simple C++ library used to read csv files.

# Get started: (see /example/example.cpp)
  1. Download the library and extract it with your project
  2. Import the .h file
  4. Create an object of type CSV_Reader 
  5. Iterate over your csv file using the iterator obejct provided

# Methods and Objects provided:
   CSV_Reader: Represents a csv file.
    CSV_Row& get_next_row(): Fetch the next row from file
    bool is_next(): Returns true if there is a next
  
  CSV_Row: Represents a csv row
    	size_t get_size_col(): Get the number of columns of the current row
  		string get_string_at(size_t col): Get the string located at column 'col'
  		double get_double_at(size_t col): Get the string located at column 'col'
  		int get_int_at(size_t col): Get the string located at column 'col'
  		tm get_time_at(size_t col, string time_format): Get the number of columns of the current row
  		string get_string_at(string col):  Get the string located at column 'col'
  		double get_double_at(string col): Get the string located at column 'col'
  		int get_int_at(string col): Get the string located at column 'col'
