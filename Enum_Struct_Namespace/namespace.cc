#include <cstdint>
#include <iostream>

namespace AD{


enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    std::uint32_t id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle.velocity << std::endl;

    switch (vehicle.lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Velocity [kph]: " << vehicle->velocity << std::endl;

    switch (vehicle->lane)
    {
    case Lane::CENTER_LANE:
    {
        std::cout << "Vehicle Lane Association: Center Lane" << std::endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        std::cout << "Vehicle Lane Association: Right Lane" << std::endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        std::cout << "Vehicle Lane Association: Left Lane" << std::endl;
        break;
    }
    default:
    {
        break;
    }
    }
}

};

int main()
{
    //Vehicle v1 = {.id = 1, .velocity = 22.0F, .lane = Lane::LEFT_LANE}; // better readability. C++22 standard.'designated initilizer list'
    // to use auto:
    auto v1 = AD::Vehicle{.id = 1, .velocity = 22.0F, .lane = AD::Lane::LEFT_LANE};

    AD::print_vehicle_data(v1);
    AD::print_vehicle_data_pointer(&v1);
    return 0;
}
