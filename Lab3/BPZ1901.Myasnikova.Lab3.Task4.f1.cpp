module BPZ1901.Myasnikova.Lab3.Task4:f1;

namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return sqrt(2.0 * x + 2.0 * sqrt(pow(x, 2.0) - 4.0)) / (sqrt(pow(x, 2.0) - 4.0) + x + 2.0);
			}
		}
	}
}