int main()
{
    int elementCount;
    int x = 0, y = 0 , z = 0;
    int xi, yi, zi;
    std::cin >> elementCount;

    for (int i=0; i < elementCount; i++){
        std::cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }


    if (x == 0 && y == 0 && z == 0) {std::cout << "YES";}
    else {std::cout << "NO";}


}