#include <iostream>
#include "suh.h"
#include "dif.h"
#include "quot.h"
#include <c.math>
=======
#include "prod.h"
>>>>>>> add_prod_function
using namespace std;

int main()
{
	int a = 5;
	int b = 2;
	cout << "Hello world!!!!" << endl;
	cout << a << " + "<< b <<"= " << sum(a, b) << endl;
	cout << a << " - "<< b <<"= " << dif(a, b) << endl;
	cout << a << " * "<< b <<"= " << prod(a, b) << endl;
	cout << a << " / "<< b <<"= " << quot(a, b) << endl;

}