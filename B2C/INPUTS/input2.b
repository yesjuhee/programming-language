auto fn(auto, auto);

auto main() 
{
    auto x, y, z = 1;
    y = 'c';
    x = fn(z, y);

    return y;
}
