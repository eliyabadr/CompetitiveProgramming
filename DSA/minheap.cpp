#include <iostream>
#include <vector>

using namespace std;

struct minHeap {
    
    int size;
    vector<int> heap;

    minHeap(){}
    minHeap(int a, vector<int> test) {
        size = a;
        for(int i = 0 ; i < size ; i++){
            heap.push_back(test[i]);
        }
    }

    int firstChild(int i){
        return 2*i + 1;
    }

    int secondChild(int i){
        return 2*i + 2;
    }

    int parent(int i){
        return (i-1)/2;
    }

    void swap(int i , int j){
        int temp;
        temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    void bubbleUp(int i){
        if(heap[i] >= heap[parent(i)]){
            swap(i,parent(i));
            bubbleUp(parent(i));
        } else {
            return;
        }
    }

    void bubbleDown(int i){
        if(firstChild(i) < size && secondChild(i) < size){
            if(heap[i] >= heap[firstChild(i)] || heap[i] >= heap[secondChild(i)]){
                if(heap[firstChild(i)] >= heap[secondChild(i)]){
                    swap(i, secondChild(i));
                    bubbleDown(secondChild(i));
                } else {
                    swap(i, firstChild(i));
                    bubbleDown(firstChild(i));
                }
            }
        } else if(firstChild(i) < size && secondChild(i) >= size){
            if(heap[i] >= heap[firstChild(i)]){
                swap(i, firstChild(i));
                bubbleDown(firstChild(i));
            }
        }
    }

    void heapify(){
        for(int i = 0 ; i < size ; i++){
            bubbleDown(i);
        }
    }

    void insert(int num){
        heap.push_back(num);
        bubbleUp(heap.size() - 1);
    }

    void print(){
        for(int i = 0 ; i < size ; i++){
           cout<<heap[i]<< " ";
        }
    }

    
};


int main(){
    return 0;
}
