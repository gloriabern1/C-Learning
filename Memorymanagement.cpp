#include <iostream>
#include <memory>

struct AllocationMetrics{

    uint32_t TotalAllocated =0;
    uint32_t Totalfreed =0;

    uint32_t currentUsage() { return TotalAllocated-Totalfreed;}

};

static AllocationMetrics s_AllMet;

void* operator new(size_t size)
{
 s_AllMet.TotalAllocated += size;
std::cout<<"Allocating "<<size << "bytes\n";

    return malloc(size);
}

void operator delete (void* memory, size_t size){

s_AllMet.Totalfreed +=size;
    std::cout<<"Freeing "<<size << "bytes\n";
    free(memory);
}

struct Object
{
  int x,y,z;
};

static void PrintMemoryUsage()
{
    std::cout << "Memory Usage: "<< s_AllMet.currentUsage() << "bytes\n";
}

int main(){

//std::string string="Gloria";
//stack allocation
 //Object obj;

 //heap allocation
 //Object* obj= new Object;

 //using smart pointer

 PrintMemoryUsage();
 {
 std::unique_ptr<Object> obj= std::make_unique<Object>();
 PrintMemoryUsage();
 }

PrintMemoryUsage();
 std::string string ="Gloria";
}