#ifndef _myLibrary
#define _myLibrary

namespace myLibrary_01
{
	void print(std::string data)
	{
		std::cout << "[LIB01] " << data << std::endl;
	}
} // namespace myLibrary_01

namespace myLibrary_02
{
	void print(std::string data)
	{
		std::cout << "[LIB02] " << data << std::endl;
	}

	class Student
	{
		int age;

	public:
		std::string name;
		std::string course;
	};

	struct Teacher
	{
		int age;

	private:
		std::string name;
	};
} // namespace myLibrary_02

#endif
