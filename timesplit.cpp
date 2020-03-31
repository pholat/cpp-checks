#include <iostream>
#include <string>
#include <string_view>
#include <ctre.hpp>

using namespace ctre::literals;

// std::string_view test_time = "/18/03/03,21:00:00-32"; /// <-- faulty string
std::string_view test_time = "18/03/03,21:00:00-32";
static constexpr auto re = ctll::fixed_string{ "([0-9]+)/([0-9]+)/([0-9]+),([0-9]+):([0-9]+):([0-9]+).*"};

int main(int argc, char *argv[])
{
    auto [all,day, month, year, hour, minute, seconds] = ctre::match<re>(test_time);
    std::cout << "exists:   " << day << std::endl;
    std::cout << "day:      " << day.to_string() << std::endl;
    std::cout << "month:    " << month.to_string() << std::endl;
    std::cout << "year:     " << year.to_string()  << std::endl;
    std::cout << "hour:     " << hour.to_string()  << std::endl;
    std::cout << "minute:   " << minute.to_string()  << std::endl;
    std::cout << "seconds:  " << seconds.to_string()  << std::endl;
    std::cout << "all:      " << all.to_string()  << std::endl;
    return 0;
}
