
#include "Base_client.h"
#include <iostream>
#include <fstream>

using namespace std;

int Base_client::authentifier(int numero_carte){
	for(int i = 0; i < Numero_carte.size() ; i++){
		if(numero_carte == Numero_carte[i]){
			return 1;
		}
	}
	return 0;
}


Base_client::Base_client(){
	fstream MyReadFile;
	MyReadFile.open("Base_client.txt",ios::in);
	
	if(!MyReadFile){
		std::cout<< "le fichier n'existe pas " << endl;
	}else{
		while(!MyReadFile.eof()){
		MyReadFile >> buff_client;
                Numero_carte.push_back(buff_client);
		}
		MyReadFile.close();
	}
}
