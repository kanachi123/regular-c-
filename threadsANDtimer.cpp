#include <iostream>
#include <thread>
#include <mutex>
#include "timer.h"

std::mutex mtx;


void sol(int x) {

    std::lock_guard<std::mutex> lock(mtx);
    x += x * x;
    std::cout << (char)(((x == '\n') || (x == '\0')) ? ++x : x);
}


int main() {

	
    {
        timer time;

        for (int i = 0;i < 255e24;i++) {
            std::thread th1(sol, i), th2(sol, i+1);
            
            th1.join();
            th2.join();
            std::cout << "\r";
        }

    }


}
