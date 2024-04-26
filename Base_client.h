#ifndef BASE_CLIENT_H
#define BASE_CLIENT_H
#include <vector>

class Base_client{
	int buff_client;
	std::vector<int> Numero_carte;
	std::vector<int> Code_secret;

	public:
        Base_client();
	int authentifier(int numero_carte);
	void get_client();

};


#endif
