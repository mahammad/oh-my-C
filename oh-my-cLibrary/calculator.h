#pragma 
//#include "calculator.h"
class Calculator
{
public:
	Calculator(void);
	~Calculator();
	int ctotl() const;
	int csubt() const;
	int cbump() const;
	int cdivs() const;
};
int ctotl(int x, int y) {
	return (x + y);
} //calculator total operation.
int csubt(int x1, int y1) {
	return (x1 - y1);
} //calculator subtraction operation.
int cbump(int x2, int y2) {
	return (x2 * y2);
} //calculator bump operation.
int cdivs(double x3, double y3) {
	return ((x3 / y3) || (y3 / x3));
} //calculator division operation.