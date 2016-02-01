//vector.h
class Vector
{
	int *pV;
	int num; //numero de elementos
public:
	Vector(int);
	~Vector();
	int& operator[](int index);
	void Ordena(bool ord); //true=asc. false=desc
};
