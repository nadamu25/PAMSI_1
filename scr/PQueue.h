#pragma once
#ifndef PQUEUE_H_
#define PQUEUE_H_

#include <iostream>

//struktura pakietu n wiadomosci
struct Package {
	int n;
	std::string pack;
};

class P_queue {
	private:
		int size; //rozmiar kopca
		int capacity; //zadeklarowana pojemność (spodziewam sie wiedziec jakiej wielkosci bedzie wiadomosc)
		Package* heap; //tablica na wskaźniki do danych

		void bubble_up();
		void bubble_down();
	
	public:
		P_queue(int capacity); //konstruktor-> alokuje dynamiczną tablicę na wskaźniki
		~P_queue(); //destruktor, zeby na pewno usunac tablice

		int get_size() const; //zwraca rozmiar
		int get_capacity() const; //zwraca pojemnosc kopca
		bool is_empty() const; //czy jest pusta

		std::string top(); //zwraca wartość na szczycie

};

#endif //PQUEUE_H_