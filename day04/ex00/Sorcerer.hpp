#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>

class Sorcerer {
public:
                    Sorcerer(std::string const &, std::string const &);
                    Sorcerer(Sorcerer const &);
                    ~Sorcerer(); 
    Sorcerer&       operator=(Sorcerer const &);
    void            showing();
    std::string     getName() const;
    std::string     getTitle() const;
private:
    std::string     name;
    std::string     title;
};

#endif