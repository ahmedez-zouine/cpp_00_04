#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define THOUGHT     "start thinking"
# define CAT_THOUGHT "Cat thinking !"
# define DOG_THOUGHT "Dog thinking !"

class Brain
{
    protected :
        std::string ideas[100];

    public :
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain(std::string type);
        Brain& operator= (const Brain &src);

        const std::string getIdea() const;
        void setIdea(std::string const idea);
};

#endif