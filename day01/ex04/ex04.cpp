# include <string>
# include <iostream>
# include <iomanip>

int     main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string* su = &s;
    std::string &ss = s;

    std::cout << s << std::endl;
    std::cout << *su << std::endl;
    std::cout << ss << std::endl;
    return 0;
}