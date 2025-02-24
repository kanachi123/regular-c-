#pragma once

#include <chrono>
#include <iostream>

class timer {
public:
    timer() : start(std::chrono::steady_clock::now()) {}

    ~timer() {
        auto end = std::chrono::steady_clock::now();
        std::cout << "\n\nDuration: "
            << std::chrono::duration_cast<std::chrono::seconds>(end - start).count()
            << " milliseconds"
            << std::endl;
    }

private:
    std::chrono::steady_clock::time_point start;
};
