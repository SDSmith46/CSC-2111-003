#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
<<<<<<< HEAD
	
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		void close();
		void writeLine(String* line);
=======
		
	public:
		WriteFile(const char* file_name);
		~WriteFile();
		void writeLine(String* line);
		void close();
		
>>>>>>> 60fd7b6a6401fe9f2b7e14c641fb75fbc675fe3f
};

#endif
