# timer
Basically like boost/timer.hpp, but using std::chrono instead of std::clock (C++11)

Same method names and variable names used for easier understanding.

boost/timer.hpp used std::clock() to initialize the start_time variable, whereas this uses std::chrono::high_resolution_clock::now()

boost/timer.hpp is officially deprecated and has been replaced by boost/timer/timer.hpp, which requires compiled libs however.

I threw this together in a few minutes, because boost/timer.hpp on my old boost version didn't work and always returned 15 when I called elapsed()