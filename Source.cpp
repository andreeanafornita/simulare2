#include<iostream>
#include<string>
using namespace std;

enum class Type {
	TEAM,
	INDIVIDUAL
};

class CppProject {
private:
	int projectId;
	char* members = nullptr;
	int noMembers;
	int noLinesCode;
	bool isComplex;
	int const static LINES_OF_CODE_PER_HOUR = 30;
	int id;
	Type type = Type::INDIVIDUAL;

public:
	CppProject(int projectId, char* members) {
		this->setMembers(members);
		this->setProjectId(projectId);
	}
	//CppProject(int projectId, char* members) {
		//this->setMembers(members);
		//this->setProjectId(projectId);
		//this->setNoLinesOfCode(noLinesCode)
	//}
	int getProjectId() {
		return this->projectId;
	}
	char* getMembers() {
		return this->members;
	}
	void setProjectId(int projectId) {
		this->projectId = projectId;
	}
	void setMembers(char* members) {
		if (members != nullptr || strlen(members) != 0) {
			delete[] this->members;
			members = new char[strlen(members) + 1];
			strcpy(members, members);
		}
		this->members = members;
	}

};
int main() {
	CppProject prj1(1, "John");



	return 0;
}