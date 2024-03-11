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
void P_queue::bubble_down(int i) {
    int parent_num = (i-1)/2; 
    if(heap[i].number < heap[parent_num].number) {
        Package temp{heap[i].number, heap[i].pack};
    }
}

//sortowanie w dół
void P_queue::bubble_up(int i) {
    //cos..
}

//zwraca wierzchołek
std::string P_queue::top() {
    return heap[0].pack;
}