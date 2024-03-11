#include "PQueue.h"

//konstruktor:
P_queue::P_queue(int capacity):capacity(capacity), size(0) {
    heap = new Package[capacity];
}

//destruktor
P_queue::~P_queue() {
    delete[] heap;
}

//getter ilosci aktualnych elementów 
int P_queue::get_size() const {
    return size;
}

//zwraca pojemnosc kopca
int P_queue::get_capacity() const {
    return capacity;
}

//boolian czy jest pusta
bool P_queue::is_empty() const {

    if(size == 0) {
        return true;
    }

    return false;
}

//sortowanie do góry
void P_queue::bubble_down() {
    //cos..
}

//sortowanie w dół
void P_queue::bubble_up() {
    //cos..
}

//zwraca wierzchołek
std::string P_queue::top() {
    return heap[0].pack;
}