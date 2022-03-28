#include <iostream>

using namespace std;

int main() {

int *p;
int vetor[10];

p=&vetor[0];

cout << "\n" << p << "\n";

p=&vetor[1];
cout << "\n" << p << "\n";

p=&vetor[2];
cout << "\n" << p << "\n";

*(p+=1);
cout << "\n" << p << "\n";

return 0;

}