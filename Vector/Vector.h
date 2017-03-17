// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the VECTOR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// VECTOR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

#include <string>

// This class is exported from the Vector.dll
class VECTOR_API CVector {
public:
	CVector(double x = 0.0, double y = 0.0, double z = 0.0);
	void print() const;
	std::string toString() const;
	double getX() const;
private:
	double x_, y_, z_;
};
