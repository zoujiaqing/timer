#pragma once

#include <chrono>

class timer {
public:
    timer(){ _start_time = std::chrono::high_resolution_clock::now(); }
    void restart(){ _start_time=std::chrono::high_resolution_clock::now(); }
    double elapsed(){ return std::chrono::duration<double, std::ratio<1, 1>>( std::chrono::high_resolution_clock::now()-_start_time).count(); }
    double elapsed_max() const; //Not yet implemented
    double elapsed_min() const; //Not yet implemented
private:
    std::chrono::high_resolution_clock::time_point _start_time;
};