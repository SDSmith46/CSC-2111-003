#include "WriteFile.h"
#include <sstream>
<<<<<<< HEAD

=======
using namespace std;
>>>>>>> 60fd7b6a6401fe9f2b7e14c641fb75fbc675fe3f
WriteFile::WriteFile(const char* file_name)
{
   output_file.open(file_name);
   closed = false;
}

<<<<<<< HEAD
WriteFile::WriteFile()
{
   close();
   delete this;
=======
WriteFile::~WriteFile()
{
   close();
>>>>>>> 60fd7b6a6401fe9f2b7e14c641fb75fbc675fe3f
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
<<<<<<< HEAD
     output_file << line->getText() << endl;
=======
      output_file << line->getText() << endl;
>>>>>>> 60fd7b6a6401fe9f2b7e14c641fb75fbc675fe3f
   }
}
