#include <iostream>

void height_ball(double g, double height, double time);

int main(){
    double g{9.8};
    double height{};
    double h_ball{};

    std::cout << "Introduce the tower's height: ";
    std::cin >> height;

    height_ball(g, height, 0.0);
    height_ball(g, height, 1.0);
    height_ball(g, height, 2.0);
    height_ball(g, height, 3.0);
    height_ball(g, height, 4.0);
    height_ball(g, height, 5.0);


    return 0;
}

void height_ball(double g, double height, double time){
    double h_ball{};

    h_ball = height - (g * (time * time))/2.0;
    if (h_ball <= 0)
        std::cout << "At " << time << " seconds, the ball is on the ground\n";
    else
        std::cout << "At " << time << " seconds, the ball is at height " << h_ball << "m" << std::endl;
}